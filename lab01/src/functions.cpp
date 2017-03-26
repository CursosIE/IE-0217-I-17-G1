#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <unistd.h>
#include "functions.h"
//para obtener informacion del la terminal
#include <sys/ioctl.h>

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

void printScreen(int * memoria,int columnass){
  for (int i = 0; i < columnass-6; i++) {
    if (memoria[i] != 0) {
      cout << (char)randInt(33, 126);
      wait(3000);
      memoria[i]=memoria[i]-1;
    }
    if (memoria[i] == 0 ) {
      cout << " ";
    }
  }
}
void wait(unsigned int time)
{
    usleep(time);
}
//obtiene las columnas a través de ioctl, y TIOCGWINSZ
int getTermCols(){
  int columnas;
  struct winsize w;
  ioctl(0, TIOCGWINSZ, &w);
  columnas = w.ws_col;
  return columnas;
}
//Obtiene las filas de igual forma que las columnas
int getTermRows(){
  int rows;
  struct winsize w;
  ioctl(0, TIOCGWINSZ, &w);
  rows = w.ws_row;
  return rows;
}
//retorna un random entre esos dos argumentos
int randInt (int low, int high)
{
  return rand() % ( high - low ) + low;
}
//Si el random que se generó es igual la columna entonces este se hace un char
//es decir hay un 1/columnas probabilidades de que cada columna se vuelva una
//hilera de caracters, es decir deje de estar vacía
//la siguiente interaccion
int decideChar(int * memoria, int columnass, int filas){
    //este itera a traves de los elementos en memoria
    for (int i = 0; i < columnass; i++) {
      //condicional que comprueba si el random es igual a la columna
      //y ademas si el elemento en esta columna es igual a 0
      //es decir no esta enviando chars
      if ((randInt(0, columnass) == i && memoria[i]==0) || (randInt(0, columnass) == 2*i && memoria[i]==0)) {
        //si se cumplio la condicion entonces decide la cantidad de lineas en las que va a haber una
        //hilera de caracteres en esa columna
        memoria[i]=randInt(5, filas);
      }
    }
    return 0;
}
