#include "calculateFactorial.h"
#include <cmath>
#include <iostream>

using namespace std;


int calculateFactorial(int KappaChungus)
{
    int BiggusChungus = 1;
    int Bigger = 1;
    if (KappaChungus>0){
        while (Bigger<=KappaChungus){
            BiggusChungus *= Bigger;
            Bigger++; 
        }
    }
    return BiggusChungus;
}