/* 
* File : f6.cpp
* Project : SENG1000
* Programmer: Jaskaran Kainth
* First version : 2022-03-18
* Description :  This is a program to store values in an array aswell as using pointers to modify parameters. This program is used to calculate sum and average.
*/ 

#include <iostream>

using namespace std;

/* getDouble()
Parameter: double *pNumber: pointer to a variable that is filled in by the user input, if valid 
return value: int: 1 if the user entered a valid floating-point number, 0 otherwise
*/
int getDouble(double *pNumber);

/* calculateStats()
parameters: double number1, number2, number3, number4: four floating-point numbers
    double *pAverage: pointer to a variable that is filled in by this function with the average of number1, number2, number3, and number4 
    double *pSum: pointer to a variable that is filled in by this function with the sum of number1, number2, number3, and number4 
Return Value: none
*/
void calculateStats(double number1, double number2, double number3, double number4,
                    double *pSum, double *pAverage);

/* Function: calculateArrayStats() 
Parameters:  double values[]: floating-point numbers 
    int numArray: number of array elements 
    double *pSum: pointer to a variable that is filled in by this function with the sum of all elements in the array 
    double *pAverage: pointer to a variable that is filled in by this function with the average of all elements in the array 
Return Value: none
*/
void calculateArrayStats(double values[], int numArray, double *pSum, double *pAverage);

/* 
Function: fillArray() 
Parameters:  double values[]: floating-point numbers 
   int numArray: number of array elements 
   double fillValue: value to put into array elements 
Return Value: none 
*/
void fillArray(double values[], int numArray, double fillValue);

/*
function to input a double value from user and put the value into the variable pointed by pNumber
If the user enters a valid floating point number
    return 1 
        else return 0
*/
int getDouble(double *pNumber){
    cin >> *pNumber;
    if(cin.fail()){
        cin.clear();
        cin.ignore(100), "\n";
        return 0;
    }
    return 1;
}

/*
function that calculates the sum and average of the four inputs.
    The function then places the sum and average into into the variables pointed to by the pointer values.
*/
void calculateStats(double number1, double number2, double number3, double number4, double *pSum, double *pAverage){
    *pSum = (number1 + number2 + number3 + number4);
    *pAverage = ((*pSum)/4);
}

/*
function that calculates the sum and average of the values of the array that were inputted by the user.
    the function then places the sum and average into the variables pointed to by the pointer values
*/
void calculateArrayStats(double values[], int numArray, double *pSum, double *pAverage){
    *pSum = 0;
    for(int i = 0; i < numArray; i++){
        *pSum += values[i];
    }
    if(numArray > 0)
        *pAverage = (*pSum/numArray);
    else
        *pAverage = 0;
}

/*
function to input the values array with the floating point numbers.
*/
void fillArray(double values[], int numArray, double fillValue){
    for(int i = 0; i < numArray; i++)
        values[i] = fillValue;
}

int main(){
    double number1 = 0, number2 = 0, number3 = 0, number4 = 0;
    double average = 0;
    double sum = 0;
    int numArray = 7;
        double values[7];

    cout << "Enter a valid floating point number for number1: ";
    if(!getDouble(&number1)){
        cout << "This isn't a valid number for number1, the program will now end..." << endl;
        return 1;
    }

    cout << "Enter a valid floating point number for number2: ";
    if(!getDouble(&number2)){
        cout << "This isn't a valid number for number2, the program will now end..." << endl;
        return 1;
    }

    cout << "Enter a valid floating point number for number3: ";
    if(!getDouble(&number3)){
        cout << "This isn't a valid number for number3, the program will now end..." << endl;
        return 1;
    }

    cout << "Enter a valid floating point number for number4: ";
    if(!getDouble(&number4)){
        cout << "This isn't a valid number for number4, the program will now end..." << endl;
        return 1;
    }

    calculateStats(number1, number2, number3, number4, &sum, &average);
        cout << "The average and the sum of the variables: "  << average << ", " << sum << endl;

    for(int i = 0; i < numArray; i++){
        cout << "Enter a value for " << (i+1) << ":";
        if(!getDouble(&values[i])){
            cout << "This isn't a valid value for index: " << (i+1) << ". The program will now end..." << endl;
            return 1;
        }
    }


    calculateArrayStats(values, numArray, &sum, &average);
    cout << "The average and sum of the array's elements: " << average << ", " << sum << endl;


    fillArray(values, numArray, 40);

    cout << "Enter your new array elements: " << endl;
    for(int i = 0; i < numArray; i++){
        cout << values[i];
        if(i < numArray- 1)
        cout << ",";
    }
    return 0;
}