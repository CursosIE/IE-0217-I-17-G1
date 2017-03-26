#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <unistd.h>
#include "functions.h"
#include <cstring>
using namespace std;

int main()
{
  //hace que las letras sean verdes. no pude con el background negro
  cout << "\033[30;32m\033[30\n";
  int columnass = getTermCols();
  srand( time( NULL ) );
  //es el que llama al decideChar
  int* memoria;
  //Se utiliza para hacer una copia, almacena la iteraccion pasada
  int* memoria2;
  memoria2 = (int *)calloc(1000, sizeof(int));
  //Se inicializa la pantalla
  clearScreen(80);
  //Se ejecuta hasta que sea eliminado
  while(1){
      //Cada ciclo se renueva el tamaño de la terminal
      columnass = getTermCols();
      //Se guarda memoria para los datos de las columnas en este instante
      memoria = (int *)calloc(columnass, sizeof(int));
      //Se hace una copia de memoria2(esto para "actualizar"
      memcpy(memoria, memoria2, sizeof(int)*columnass);
      //se determinan las filas que tiene la terminal -no lo veo muy util
      int filas = getTermRows();
      //decide si va a haber o no un char en dada columna la siguiente iteracion
      decideChar(memoria, columnass, filas);
      //llama a la funcion de printeo, le envia memoria y columnass
      printScreen(memoria, columnass);
      //Se termina la linea
      moveScreen();
      //Se hace una copia de memoria a memoria2
      memcpy(memoria2, memoria, sizeof(int)*columnass);
    }
      return 0;
}
