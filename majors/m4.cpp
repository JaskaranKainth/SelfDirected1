
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

            ofstream torText; torText.open("Toronto Raptors.txt");
            torText << "Miami Heat, 109-114 \n";
            torText << "Orlando Magic, 102-89 \n";
            torText << "Minnesota Timberwolves, 125-102 \n";
}