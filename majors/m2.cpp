/* 
* File : m2.cpp
* Project : SENG1000
* Programmer: Jaskaran Kainth 8481848
* First version : 2022-01-11
* Description : This is a program to calculates powers using a function that you create.
*/ 

#include <iostream>
#include <math.h>
#include <istream>
#include <stdbool.h>

using namespace std;

string UserInput(string);

int rangechecker(int valueCheck, int minVal, int maxVal){
    if (valueCheck > minVal && valueCheck < maxVal){
        return 1;
    }
    return 0;
}


// int choice indicates the users choice
// int newChoice indicates the users new choice after navigating into options 1 and 2
int main() {
    int newChoiceBase;
    int base = newChoiceBase;
    int newChoiceExponent;
    int exponent = newChoiceExponent;
    int choice = 0;

// power calculation
    int powerCalculation = 1;
        while (exponent != 0) {
            powerCalculation *= base; 
            exponent--;
        } 


// constants for menu choices, declared variables correspond to numbers.
    const int CHANGE_BASE = 1, CHANGE_EXPONENT = 2, DISPLAY_BASE = 3, EXIT_PROGRAM = 4; 


// menu displayed to user
while(choice !=4) {
    //statement if user selects option 1. change base.
      cout << "Power Menu: " << "\n";
        cout << " 1. Change base " << "\n";
        cout << " 2. Change exponent " << "\n";
        cout << " 3. Display base r1aised to exponent " << "\n";
        cout << " 4. Exit program " << "\n";
    cout << "Option? " << "\n";
    cin >> choice;

       if (choice == CHANGE_BASE) {
        cout << "Enter a new base: " << "\n";
        cin >> newChoiceBase;
        base = newChoiceBase;
        if (rangechecker(newChoiceBase, 0, 6) == 1) {
            cout << "Your new base is " << newChoiceBase << endl << "\n" << endl;
        } else {
            cout << "Value is out of range";
        }

         } else if (choice == CHANGE_EXPONENT) {
        cout << "Enter a new exponent: " << "\n";
        cin >> newChoiceExponent;
        exponent = newChoiceExponent;
        if (rangechecker(newChoiceExponent, 0, 26) == 1) {
            cout << "Your new exponent is " << newChoiceExponent << endl << "\n" << endl;
        } else {
            cout << "Value is out of range ";
        }

         //statement if users display base raised to exponent.
    } else if (choice == DISPLAY_BASE) {
        cout << "The power of " << base << " is " << powerCalculation << endl << "\n" << endl;  
    }
    //statement if user chooses the exit program.
    if (choice == EXIT_PROGRAM) {
        return 0;

    //else statment if user selects any option other then 1,2,3,4
    } else {
        cout << "Invalid Entry" << "\n";
    }
}
    return 0;


//     #pragma warning(disable: 49396) 
//     int getNum(void){
// /* we will see in a later lecture how we can improve this code */ 
//     char record[121] = {0}; /* record stores the string */ 
//     int number = 0; 
//     /* NOTE to student: indent and brace this function consistent with 
// your others */ 
 
//     /* use fgets() to get a string from the keyboard */ 
//         fgets(record, 121, stdin); 
//     /* extract the number from the string; sscanf() returns a number  
//      * corresponding with the number of items it found in the string */ 
//         if( sscanf(record, "%d", &number) != 1 ) 
//         { 
//         /* if the user did not enter a number recognizable by  
//          * the system, set number to -1 */ 
//             number = -1; 
//         }    
//         return number; 
// }
}
