/**
 *   \file functions.h
 *   \brief Functions to be used by the main program.
 *
 */


/** 
\brief Clears the terminal screen by inserting multiple blank lines
\params int Height of the terminal window
*/
void clearScreen(int height);


/** 
\brief Moves the terminal screen down by inserting a single line
*/
void moveScreen();


/** 
\brief Prints an array into the terminal window
\params int[] line The array to be printed
\params int size Sixe of the array to be printed
*/
void printScreen(int line[],int size);

/** 
\brief Makes the program "wait" for mircoseconds
\params int time Time to wait in microseconds
*/
void wait(unsigned int time);


/** 
\brief Get the number of rows on the terminal from the system
*/
int getTermRows();


/** 
\brief Gets a random integer on a range
\params int low lower limit of the range
\params int high Upper limit of the range
*/
int randInt(int low, int high);


/** 
\brief Get the number of columns on the terminal from the system
*/
int getTermCols();

/** 
\brief Decides the number of lines on which there is a character string in that column
*/
int decideChar(int * memoria, int columnass, int filas);
