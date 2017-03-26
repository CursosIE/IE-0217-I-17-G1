/****************************************************************************
 *  Author: Alonso Montero Fuentes <alon182@gmail.com>                 	    *
 ****************************************************************************/
void clearScreen(int height);
void moveScreen();
void printScreen(int line[],int size);
void wait(unsigned int time);
//funciones que yo agregue
int getTermRows();
int randInt(int low, int high);
int getTermCols();
//void setHeight(int lines);
//int getHeight();
//void setLength(int columns);
int getLength();

char randomChar();
int randomWithSign();
int decideChar(int * memoria, int columnass, int filas);
