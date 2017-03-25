#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include <unistd.h>
#include "functions.h"
using namespace std;

int main()
{
    //imprime del 1 al 50 (prueba)
    for (int i=1; i<= 50; i++){
	    cout <<	i;
	    wait(100000); //velocidad bonita
	    moveScreen();
    }
    setHeight(1);
    cout << getHeight();
    return 0;
}
