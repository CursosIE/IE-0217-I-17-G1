#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <unistd.h>
#include <typeinfo>
#include "functions.h"
#include <sys/ioctl.h>

using namespace std;
static int height;
static int length;
/**
 *   \file functions.cpp
 *   \brief Functions to be used by the main program
 *
 */


/** 
\brief Clears the terminal screen by inserting multiple blank lines
\params int Height of the terminal window
*/
void clearScreen(int height)
{
    for(int i=1; i <= height; i=i + 1){
	cout << endl;
    }
}


/** 
\brief Moves the terminal screen down by inserting a single line
*/
void moveScreen()
{
    cout << endl;
}


/** 
\brief Prints an array into the terminal window
\params int[] line The array to be printed
\params int size Sixe of the array to be printed
*/
void printScreen(int line[],int size)
{
    for(int i=0; i<size;++i){
	cout << i;
    }
}


/** 
\brief Makes the program "wait" for mircoseconds
\params int time Time to wait in microseconds
*/
void wait(unsigned int time)
{
    usleep(time);
}


/** 
\brief Get the number of columns on the terminal from the system
*/
int getTermCols()
{
    int columnas;
    struct winsize w;

    ioctl(0, TIOCGWINSZ, &w);
    columnas = w.ws_col;

    return columnas;
}


/** 
\brief Get the number of rows on the terminal from the system
*/
int getTermRows(){
    int rows;
    struct winsize w;

    ioctl(0, TIOCGWINSZ, &w);
    rows = w.ws_row;

    return rows;
}


/** 
\brief Gets a random integer on a range
\params int low lower limit of the range
\params int high Upper limit of the range
*/
int randInt (int low, int high)
{
    return rand() % ( high - low ) + low;
}


/** 
\brief Decides the number of lines on which there is a character string in that column
*/
int decideChar(int * memoria, int columnass, int filas){
    for (int i = 0; i < columnass; i++) {
	if (randInt(0, columnass) == i && memoria[i] ==0) {
	    memoria[i]=randInt(5, filas);

	}
    }

    return 0;
}
