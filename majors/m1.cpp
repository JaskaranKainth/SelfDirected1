/* 
* File : m1.cpp
* Project : SENG1000
* Programmer: Jaskaran Kainth 8481848
* First version : 2022-01-02
* Description : The code below takes a given string and returns its associated ASCII value through sequence summation when compared to the letters of the alphabet.
*/ 

#include <string>
#include <iostream>

using namespace std;

//string alphabet is assigned to the letters of the alphabet
//string name takes any name inputted. I wrote my name shortened as "Jask"
//int runningTotal is the sequence summation of the alphabets ASCII values.
int main() {
    string alphabet = "zyxwvutsrqponmlkjihgfedcbabcdedfghijklmnopqrstuvwxyz";
    string name = "hello";
    int runningTotal = 0;

// the for loop prints the first value of the alphabet each time on a serpearte line through i, then repeats through i++
// the runningTotalAverage is equal to the runningtotal divided by (i+1) as i would be the current ASCII value for the given letter of the alphabet, while adding 1 as the string continues. for example ((93+94+95)/3) = runningtotalaverage
    for (int i = 0; i < alphabet.length(); i++){
        runningTotal += (int)alphabet[i];
        int runningTotalAverage = runningTotal/(i+1);
// tolower makes the letters all lowercase, then takes the initial of the name and aligns it with the original string alphabet
// cout then prints the runningTotalAverage for each letter up until it reaches the first [0] letter of your name, it then prints the ascii number and continues the loop.
        if(tolower(name[0]) == alphabet[i]){
            cout << alphabet[i] << "\t" << runningTotalAverage << "\n";
        } else {
            cout << alphabet[i] << "\t" << (char) (runningTotalAverage) << "\n";
        }
    }
    return 0;
}
