#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <unistd.h>
#include "../include/functions.h"

using namespace std;

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

//void printScreen(){}

void wait(unsigned int time)
{
    sleep(time);
}
