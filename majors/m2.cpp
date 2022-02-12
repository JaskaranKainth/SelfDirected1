/* 
* File : m2.cpp
* Project : SENG1000
* Programmer: Jaskaran Kainth 8481848
* First version : 2022-01-10
* Description : This is a program to calculates powers using a function that you create.
*/ 

#include <iostream>
#include <math.h>
#include <istream>

using namespace std;

string UserInput(string);

int main() {
    int base = 1;
    int exponent = 1;
    int choice;
    int choice2;
    int powerCalculation = 1;
        while (exponent != 0) {
            powerCalculation *= base; 
            exponent--;
        } 

// range checker 
// value to check, min acceptable value, max acceptable value
int rangeChecker;
while () {
    if(base <= )
}







// constants for menu choices
    const int CHANGE_BASE = 1, CHANGE_EXPONENT = 2, DISPLAY_BASE = 3, EXIT_PROGRAM = 4; 


// menu displayed to user
    cout << "Power Menu: " << "\n";
        cout << " 1. Change base " << "\n";
        cout << " 2. Change Exponent " << "\n";
        cout << " 3. Display base raised to exponent " << "\n";
        cout << " 4. Exit program " << "\n";
    cout << "Option? " << "\n";
    cin >> choice;

// 
if (choice == CHANGE_BASE) {
    rangeChecker;
    cout << "Enter a new base: " << "\n";
    cin >> choice;
    choice2 = base;
    cout << "your new base is " << choice2;

} else if (choice == CHANGE_EXPONENT) {
    cout << "Enter a new exponent: " << "\n";
    cin >> choice;
    choice2 = exponent;
    cout << "your new exponent is " << choice2;
    
} else if (choice == DISPLAY_BASE) {
    printf("%s" "%d", "the power calculation is ", powerCalculation);

} else if (choice == EXIT_PROGRAM) {
    return 0;

} else {
    cout << "Invalid Entry" << "\n";
}
















    #pragma warning(disable: 4996) 
    int getNum(void){
/* we will see in a later lecture how we can improve this code */ 
    char record[121] = {0}; /* record stores the string */ 
    int number = 0; 
    /* NOTE to student: indent and brace this function consistent with 
your others */ 
 
    /* use fgets() to get a string from the keyboard */ 
        fgets(record, 121, stdin); 
    /* extract the number from the string; sscanf() returns a number  
     * corresponding with the number of items it found in the string */ 
        if( sscanf(record, "%d", &number) != 1 ) 
        { 
        /* if the user did not enter a number recognizable by  
         * the system, set number to -1 */ 
            number = -1; 
        }    
        return number; 
}

}

