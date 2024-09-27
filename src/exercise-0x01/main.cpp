#include <iostream>
#include <cmath>
#include "calculateFactorial.h"

using namespace std;
/*
# Exercise 0x01
Implement a function `calculateFactorial` that computes the factorial of a given non-negative integer.
Write a test that calls the `findMax` function and prints the result to the console.
*/


int main() {
  cout << "Exercise 0x01" <<endl;
  cout << "Please input a positive integer: ";
  int KappaChungus;
  cin >> KappaChungus;
  if (KappaChungus > 0)
  {
    int factorysmilers = calculateFactorial(KappaChungus);
    cout << "The factorial of " << KappaChungus << " is " << factorysmilers << endl;
  }
  else 
    cout << "That's not a positive integer SMADGE" << endl;
  return 0;
}
