#include <iostream>
#include "findMax.h"
#include "findMax.cpp"

using namespace std;

int main() {
  cout << "Exercise 0x00" << endl;

  cout << "Please enter 3 integers: " << endl;

  // The three integers
  int a, b, c;
  cin >> a >> b >> c;
  // Actual function
  int BigNumber = findMax(a,b,c);

  // Output print
  cout << "The max integer between the 3 that you input is" << BigNumber << endl;

  return 0;
}
