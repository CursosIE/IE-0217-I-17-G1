#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <unistd.h>
#include <typeinfo>
#include "functions.h"
//para obtener informacion del la terminal
#include <sys/ioctl.h>

//#include "functions.h"

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
int randomWithSign()
{
  //min = -9
  //max = 9
    int randInt = rand() % 19 + (-9);
    return randInt;
}
//obtiene las columnas
int getTermCols(){
  int columnas;
  struct winsize w;
  ioctl(0, TIOCGWINSZ, &w);
  columnas = w.ws_col;
  return columnas;
}
//Obtiene las filas
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
// we get a random number, get it to be between 0 and the difference
// between high and low, then add the lowest possible value
  return rand() % ( high - low ) + low;
}
//Si el random que se generó es igual la columna entonces este se hace un char
//la siguiente interaccion
int decideChar(int * memoria, int columnass, int filas){
    for (int i = 0; i < columnass; i++) {
      if (randInt(0, columnass) == i && memoria[i]==0) {
        //si se complio la condicion entonces decide la cantidad de lineas en las que va a haber una
        //hilera de caracteres en esa columna
        memoria[i]=randInt(5, filas);
        //cout << memoria[i] << i << endl;

      }
    }
    return 0;
}
//int main(int argc, char const *argv[]) {
//  cout << getTermCols() << " me cago en la puta" << endl;
//  return 0;
//}
