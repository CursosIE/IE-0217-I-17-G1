#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <unistd.h>
#include "functions.h"
#include <cstring>
using namespace std;
/**
 *   \file matrix.cpp
 *   \brief Main program, Imitates the falling letters effect from the movie The Matrix.
 */

int main()
{
  int columnass = getTermCols();
  int* memoria;
  int* memoria2;
  int filas;

  memoria2 = (int *)calloc(1000, sizeof(int));

  srand( time( NULL ) );

  while(1)
  {
	columnass = getTermCols();
	memoria = (int *)calloc(columnass, sizeof(int));
	memcpy(memoria, memoria2, sizeof(int)*columnass);
	filas = getTermRows();
	decideChar(memoria, columnass, filas);

	for (int i = 0; i < columnass-3; i++) {

	    if (memoria[i] != 0) {
		cout << (char)randInt(33, 126);
		wait(9000);
		memoria[i]=memoria[i]-1;
	    }

	    if (memoria[i] == 0 ) {
		cout << " ";
	    }
	}

    moveScreen();
    memcpy(memoria2, memoria, sizeof(int)*columnass);
    }

    return 0;
}
