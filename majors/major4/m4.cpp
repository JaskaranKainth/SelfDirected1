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
int parseLine(char * gameResults, char * opponentName, int * primary, int * opponent){
    

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
    *primary = gameResults[space + 1] - '0';
    *opponent = gameResults[space + 3] - '0';

    return 1;    
} 

//processGames function
int processGames(char * teams.txt){
    FILE * results = fopen(teams, "r");

    char * line = NULL;
    size_t len = 0;
    ssize_t read;

   while ((read = getline(&line, &len, results)) != -1) {
        // printf("Retrieved line of length %zu:\n", read);
        printf("%s", line);
        // parseLine();

        printf("\n");
    }
    return 0;
    // int winPercent = ((2 * wins + ties) /(2 * (wins + losses + ties)));
}

int main(){
    char * line = NULL;
    size_t len = 0;
    ssize_t read;

//prints the text in teams.txt
    FILE * fTeams;
    fTeams = fopen("teams.txt", "r");
    char team[150];

        while(!feof(fTeams)){
            fgets(team, 150, fTeams);
            puts(team);
            processGames(team);
        } 

   while ((read = getline(&line, &len, fTeams)) != -1) {
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

// checks if game was a win, tie, or a lose


//prints the final winning percent

return 0;
}
