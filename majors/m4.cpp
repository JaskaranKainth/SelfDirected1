
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

            ofstream bklynText; bklynText.open("Brooklyn Nets.txt");
            bklynText << "Miami Heat, 110-95";
            bklynText << "Detroit Pistons, 130-123";
            bklynText << "Atlanta Hawks, 115-122";

            ofstream phxText; phxText.open("Phoenix Suns.txt");
            phxText << "Oklahoma Thunder, 96-117";
            phxText << "Golden State Warriors, 107-103";
            phxText << "Denver Nuggets, 140-130";

}