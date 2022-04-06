
#include <iostream>
#include <stdio.h>
#include <fstream>

using namespace std;

int main(){
    ofstream teamsText; teamsText.open("teams.txt");
        teamsText << "Toronto Raptors.txt \n";
        teamsText << "Brooklyn Nets.txt \n";
        teamsText << "Phoenix Suns.txt \n";
        teamsText << "Denver Nuggets.txt \n";
}