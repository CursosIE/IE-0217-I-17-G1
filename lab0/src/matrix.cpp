#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include <unistd.h>
#include "functions.h"
#include "matrix.h"
#include <ctime>
using namespace std;

int main()
{
srand(time(NULL));
setLength(10);
int generator[getLength()];
for (int j = 0; j < getLength(); j=j+1) {
    generator[j] = randomWithSign();
//    cout << generator[j];
}
    moveScreen();
while (1){
    for (int i = 0; i < getLength(); i++) {
	if (generator[i] > 0) {
	    // cout << "mayor";
	    cout << randomChar();
	    generator[i] = generator[i] -1 ;
	}
	if (generator[i] == 0) {
	    cout << " " ;
	    generator[i] = randomWithSign();
	}
	if (generator[i] < 0) {
	    cout << " " ;
	    // cout << "menor";
	    generator[i] = generator[i]+1 ;
	}
    }
    wait(100000);
}
}





/// ^ espacios para que no se haga un problema de merges

