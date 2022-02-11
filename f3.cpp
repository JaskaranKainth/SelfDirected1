/* 
* File : f3.cpp
* Project : SENG1000
* Programmer: Jaskaran Kainth
* First version : 2022-01-02
* Description : The code in this file is used to determine and return whether a number is  odd or even.
*/ 

#include <stdio.h>
#include <iostream>

using namespace std;

// function used to determine if number is odd or even 
// int isOdd checks the value of the number
// The if statement sees if the number is divisible by 2 and equals to 0. If it equals to 0 (the difference being 0), then the number is even.
// If the statement is false (the difference being 1), then the cout will return that the number is odd. 
int main() {
    int numberOne = 0;
    int isOdd(numberOne);
    if (numberOne % 2 == 0) {
        cout << numberOne << " is even \n";
    } else {
        cout << numberOne << " is odd \n";
    }
    return numberOne;

// function used to get input from user.
// record[121] indicates that the array is 121 bytes and stores the string
// fgets() receives the string from the keyboard
// sscanf() returns a number corresponding with the number of items it found in the string
int getNum(void);
    char record[121] = {0};
        int number = 0;
        fgets(record, 121, stdin);
        if(scanf(record, "%d", &number) != 1) {
            number = -1;
        }
        return number;
}
