#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <unistd.h>
#include "functions.h"
#include <cstring>
using namespace std;

int main()
{
  int columnass = getTermCols();
  srand( time( NULL ) );
  //es el que llama al decideChar
  int* memoria;
  //Es una copia que no tiene limite de tamaño, almacena la iteraccion pasada
  int* memoria2;
  memoria2 = (int *)calloc(1000, sizeof(int));
  while(1){
      columnass = getTermCols();
      memoria = (int *)calloc(columnass, sizeof(int));
      memcpy(memoria, memoria2, sizeof(int)*columnass);
      int filas = getTermRows();
      //char* perro;
      //perro = (char *)calloc(getTermCols(), sizeof(char))
      //cout << "me cago";
      decideChar(memoria, columnass, filas);
      //cout << memoria[0];
      for (int i = 0; i < columnass-3; i++) {
        //cout << "perro " << memoria[i] << columnass << endl;
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
      //imprime del 1 al 50 (prueba)
      //for (int i=1; i<= 50; i++){
  	    //cout <<	i;
  	    //wait(100000); //velocidad bonita
  	    //moveScreen();
      //}
      //setHeight(1);
      //cout << getHeight();
    }
      return 0;
}
