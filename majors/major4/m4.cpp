/*
* File : m4.cpp
* Project : SENG1000
* Programmer: Jaskaran Kainth 8481848
* First version : 2022-04-12
* Description : This is a program that takes data from text files and translates this information into a win percentage based on 3 games the team has played. 
*/

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>

using namespace std; 

//parseLine
int parseLine(char * gameResults, char * opponentName, int * primaryScore, int * opponentScore){

//if statement to see if comma exists, to split up game results string
    if(strchr(gameResults, ',') == NULL) {
        return -1;
    }

//checks if a space exists
    if(strchr(gameResults, ' ') == NULL){
        return -1;
    }

//checks if a dash exists
    if(strchr(gameResults, '-') == NULL){
        return -1;
    }

//parse game results to get opponents name
    int comma = (int)(strchr(gameResults, ',') - gameResults);
    int i = 0;
    while(i < comma){
        opponentName[i] = gameResults[i];
        i++;
}

//parse the primary and opponent score by checking for location of the space in the game results
//primary is the parce of a space, +1 to find the primary teams nummber
//opponent is the parce of the space +3 to find the opponenets number
    int space = (int)(strchr(gameResults, ' ') - gameResults);
    *primaryScore = gameResults[space + 1] - '0';
    *opponentScore = gameResults[space + 3] - '0';

//calculates wins, ties and loses and translates them to a win percent
    int wins = (*primaryScore > *opponentScore);
    int ties = (*primaryScore > *opponentScore);
    int losses = (*primaryScore > *opponentScore);

    int winPercent = ((2 * wins + ties) /(2 * (wins + losses + ties)));

return 1;    
} 

//processGames function
int processGames(char * team){
    FILE * results = fopen("Liverpool.txt", "r");
    char * line = NULL;
    size_t len = 0;
    ssize_t read;

   while ((read = getline(&line, &len, results)) != -1) {
        printf("%s", line);
        printf("\n");
    }
    return 0;
}

int main(){
    char * line = NULL;
    size_t len = 0;
    ssize_t read;
    int primaryScore;
    int opponentScore;
    int gameResults;
    int winPercent;

//prints the text in teams.txt
    FILE * fTeams;
    fTeams = fopen("teams.txt", "r");
    char team[150];

        while(!feof(fTeams)){
            fgets(team, 150, fTeams);
            puts(team);
            processGames(team);
        } 

   while ((read = getline(&line, &len, fTeams)) != -1){
        printf("%s", line);
        processGames(line);
    }
// creates a space between printing team names
    printf("\n");

// store the teams results of a game in an array
    ifstream file(team);
    if(file.is_open()){
        string gameResults[3];
        for(int i = 0; i < 3; i++){
            file >> gameResults[i];
    }
}

//checks if game was a win, tie, or a lose
//displays a winning percentage
if(primaryScore > opponentScore){
    printf("processing", team);
    printf(team, "beat", gameResults);
}else if(primaryScore = opponentScore){
    printf("processing", team);
    printf(team, "tied", gameResults);
}else{
    printf("processing", team);
    printf(team, "lost by", gameResults);
}
    printf("%s", winPercent);

return 0;
}
