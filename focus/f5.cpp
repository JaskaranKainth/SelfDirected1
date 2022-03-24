/* 
* File : f5.cpp
* Project : SENG1000
* Programmer: Jaskaran Kainth
* First version : 2022-02-24
* Description : A program to find the lowest integer based on an users input.
*/ 

#include <iostream>

using namespace std;

//int declarations for functions
int a, i;
int num = 10;
int values[10] = {};

//modifyArrayValue
//takes input from the user and creates an array based on the for statement
int modifyArrayValue(int size, int values[]) {
    for(int a = 0; a < 10; a++ ){
        cin >> values[a];
    }
}

// minArrayValue
//finds the smallest element in the array and returns its index
int minArrayValue(int values[], int size){
    int min = values[0];
    int index = 0;
    for(int i = 0; i < size; i++){
        if(values[i] < min) {
            min = values[i];
            index = i += 1;
        }
    }
    return index;
}


// int main to call functions created above
// value, num, min and array declarations below
//output and input below
int main() {
    int value;
    int num = 10;
    int values[10] = {};
    int min = values[0];

    cout << "Enter 10 values:" << endl;   
    cin >> value;

    cout << modifyArrayValue(num, values); "\n";

    cout << " the index of the smallest element in your array is: " << minArrayValue(values, num) << endl;
    }