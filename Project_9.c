#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char grid[10] = {'o', '1', '3', '4', '5', '6', '7', '8', '9', '10'};
int choice, player;

int checkForWin();
void displayBoard();
void markTurn(char turn);

int main()
{
    int i; //checls for win, correlates to flag variable in checkForWin
    char turn;
    player = 1;
    //write an if to change players
    //write a do while to execute game
    return 0;
}

int checkForWin()
{
    //a LOT of ifs and else ifs with a flag variable
}

void displayBoard()
{
    //bunch of formatting
}

void markTurn(char turn)
{
    //lots of ifs and else ifs to make choice and then an else to check for an invalid input
}