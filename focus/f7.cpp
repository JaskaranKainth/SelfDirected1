/* 
* File : f7.cpp.
* Project : SENG1000
* Programmer: Jaskaran Kainth
* First version : 2022-03-24
* Description :  A program that creates a binary file and text file.
*/ 

#include <iostream>
#include <fstream>
using namespace std;

//ofstream text creates a text file that allows us to write in it. 
//text.open opens a text file while the parameters would title the file.
//the text outputs are what is writen in the file.
int main(){
    ofstream text; text.open("myTextFile.txt.");
        text << "This is line 1. \n";
        text << "This is line 2. \n";


}