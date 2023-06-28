#ifndef _milibrerias
#define _milibrerias

int divRestas( int x, int y)
{
    if(y>x){
        return 0;
    }else{
        return divRestas(x-y,y)+1;
    }
}

#include <iostream>
using namespace std;

 

int multiplicacionSucesiva(int a, int b) {
    if (b == 0)
        return 0;
    else
        return a + multiplicacionSucesiva(a, b - 1);
}

int Sum(int x, int y){

           return x+y;
}
#endif
