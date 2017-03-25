#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <unistd.h>
#include "functions.h"

using namespace std;

static int height;
static int length;

void clearScreen(int height)
{
    // Enters multiple lines to clear the screen
    for(int i=1; i <= height; i=i + 1){
	cout << endl;
    }
}

void moveScreen()
{
    cout << endl;
}

void printScreen(int line[],int size){
    for(int i=0; i<size;++i){	
	cout << i;
    }
}
void wait(unsigned int time)
{
    usleep(time);
}

void setHeight(int lines)
{
    height = lines;
}

int getHeight()
{
    return height;
}

void setLength(int columns)
{
    length = columns;
}

int getLength()
{
    return length;
}

char randomChar()
{
    int randInt = 33 + (rand() % (int)((126-33) + 1 ));
    return (char)randInt;
}
int randomWithSign()
{
  //min = -9
  //max = 9
    int randInt = rand() % 19 + (-9);
    return randInt;
}
