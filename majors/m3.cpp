/* 
* File : m3.cpp
* Project : SENG1000
* Programmer: Jaskaran Kainth 8481848
* First version : 2022-03-11
* Description : This is a program to that checks guests into a hotel with thier name, check in date and check out date and reutrns their total bill for their stay.
*/ 

#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

//dayToIndex is used to determine the index of the day entered by the guests when prompted with checkin and check out
//daysArray being the days of the week
//the for statement is used to loop through the array to determine when the user entered certain days as strings. If they fail to do so, we return -1
//the program is set to work if the user enters the abbrivations below as the days (checkIn and checkOut)
   int dayToIndex(string day){
       int i;
       string daysArray[7] = {"sun", "mon", "tue", "wed", "thu", "fri", "sat"};
        for(int i = 0; i < 7; i++){
            if(day == daysArray[i]){
                return i;
            }
        }
        return -1;
    }

//calculateCostOfRoom is used to determine the total cost for the amount of nights you will be staying at the hotel
//cost is set to double as indicated in the assignment
//the for loop checks when the user has checked in and checked out with the int I
//cost is equal to the elements between the check in index and check out index
    double calculateCostOfRoom(const double arrayPrice[], int checkIn, int checkOut){
        double cost = 0;
        for(int i = checkIn; i <= checkOut; i++){
            cost += arrayPrice[i];
        }
        return cost;
    }

int main(){
    //declarations
    int i;
    int checkIn;
    int checkOut;
    double cost = 0;


//the array of prices corresponding to the index of days
//the array of days throughout the week
    const double arrayPrice[7] = {127.50, 128.25, 130.50, 150, 150, 162.50, 162.50};
    string daysArray[7] = {"sun", "mon", "tue", "wed", "thu", "fri", "sat"};

//strings to store check in and check out dates in an array
//strings to store guests in an array
    string checkInArray[4];
    string checkOutArray[4];
    string guestArray[4];

    checkInArray[i] = daysArray[i];
    checkOutArray[i] = daysArray[i];

//for loop to get input from the guests and ignore/move onto the next guest if the conditions are not met.
    for(int i = 0; i < 4; i++){
        cout << "Welcome to SET hotel! \n";
        cout << "Please enter your full name: ";
        getline(cin, guestArray[i]);

            if(guestArray[i] == ""){
                cin.clear();
                cin.ignore();
                cout << "Sorry that doesnt' seem to be a name on our file \n";
                cout << "please enter the next guests name: ";
            }

//if statement to ensure guest doesnt check in after meeting
break;
        cout << "Nice to meet you " << guestArray[i] << endl;
        cout << "When would you like to check in? : ";
        cin >> checkInArray[i];

            if(checkInArray[i] > daysArray[5]){
                cin.clear();
                cin.ignore();
                cout << "sorry " << guestArray[i] << " our system only allows guests to check in before Thursday as you'll miss the meeting \n";
                cout << "please enter the next guests name : ";
            }
      
// if statement to ensure guest doesnt check out before meeting
break;
        cout << "And can you enter when you plan on checking out? : ";
        cin >> checkOutArray[i];

            if(checkOutArray[i] < daysArray[5]){
                cin.clear();
                cin.ignore();
                cout << "sorry " << guestArray[i] << " our system only allows guests to check out after Thursday as you'll miss the meeting, please enter the next guests name : ";
            }

// if statement to ensure guest spends atleast one night
            if (checkInArray[i] ==  daysArray[i] && checkOutArray[i] == daysArray[i]) {
                cin.clear();
                cin.ignore();
                cout << "Sorry " << guestArray[i] << " our policy is that guests must stay for longer then 1 day, please enter the next guests name:  " << endl;
            } 

//confirmation of check in for each guest
        cout << "Great " << guestArray[i] << "! you're set to check in on " << checkInArray[i] << " and check out on " << checkOutArray[i] << endl;   
    
//for loop to print the name of the guest, when they check in, when they check out and the total cost of their stay.
    for(int i = 0; i < 4; i++){
        cout << guestArray[i] << " you're set to check in on " << checkInArray[i] << " and set to check out on " << checkOutArray[i] << ", the total cost for your stay is: " << calculateCostOfRoom(arrayPrice, dayToIndex(checkInArray[i]), dayToIndex(checkOutArray[i])) << endl;
    }
    }
      
}