#include <iostream>
#include <cmath>

/*Exercise 0x03
Extract one (or more) function(s) from the code below, that makes the program more comprehensible.*/

int main(int argc, char** argv) {
  
  double v, r;

  std::cout << "This program calculates the power dissipated in a simple resistor circuit" << std::endl;
  std::cout << "Input the power source voltage [V]: " << std::endl;
  std::cin >> v;
  std::cout << "Input the resistance R [Ohm]: " << std::endl;
  std::cin >> r;

  double power = pow(v, 2) / r;
  
  std::cout << "The power dissipated in R is " << power << "watts [W]" << std::endl;
  
  return 0;
}
