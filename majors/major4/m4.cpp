/*
* File : m4.cpp
* Project : SENG1000
* Programmer: Jaskaran Kainth 8481848
* First version : 2022-04-12
* Description : This is a program that determins NBA teams win rates through extracting information from I/O files. 
*/

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>

using namespace std; 

int parseLine(string gameResults, char opponentName, int primary, int opponent);


int main(){
    int gameResults;
    int opponentTeam;
    int primary = 0;
    int opponent = 0;
    int score;
    int wins = primary > opponent;
    int lose = primary < opponent;
    int ties = primary == opponent;

    int processGames = ((2 * wins + ties)/(2 * (wins + lose + ties)));

//prints the teams
    FILE * fTeams;
    fTeams = fopen("teams.txt", "r");
    char team[150];

    while(!feof(fTeams)){
        fgets(team, 150, fTeams);
        puts(team);
    }
    fclose(fTeams);

    printf("\n");

//store the teams results of a game in an array
ifstream file("torontoRaptors");
if(file.is_open()){
    string gameResults[3];
    for(int i = 0; i < 3; i++){
        file >> gameResults[i];
    }
}

//checks if game was a win, tie, or a lose
if(gameResults = wins){
    printf("%d", team, "beat", opponentTeam, score, "\n");
}else if(gameResults = lose){
    printf("%d %s %d", team, "tied", opponentTeam, score,"\n");
}else{
    printf("%d %s %d", team, "lost to", opponentTeam, score, "\n");
}

printf("processing");
printf("%d", processGames);


return 0;
}
