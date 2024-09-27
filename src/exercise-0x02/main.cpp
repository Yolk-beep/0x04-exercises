#include <iostream>
#include "area.hpp"
using namespace std;

/*# Exercise 0x02
Define overloaded functions to calculate the area of a rectangle, a circle, and a triangle.
*/

int main() {
  cout << "Exercise 0x02" << endl;

  // Circle
  double radius;
  cout << "Please enter a radius for which you want the circular area: ";
  cin >> radius;
  double CircleArea = Carea(radius);
  cout << "The area of the circle with the given radius: " << radius << " is: " << CircleArea << endl;

  // Rectangle
  double length, width;
  cout << "Please enter a a length and a width for which you want the rectangular area: ";
  cin >> length >> width;
  double RectangleArea = Rarea(length, width);
  cout << "The area of the rectangle with the given length: " << length << " And witdh: " << width << " is: " << RectangleArea << endl;

  // Triangle
  double height, baseline;
  cout << "Please enter a height and a baseline length for which you want triangular the area: ";
  cin >> height >> baseline;
  double TriangleArea = Tarea(height, baseline);
  cout << "The area of the triangle with the given height: " << height << " And baseline: " << baseline << " is: " << TriangleArea << endl;

  return 0;
}
// Okay I just saw the Heron's formula, and that would make it so that you get 3 parameters for the last function
// but I kinda cba going back and changing everything so I'll just leave it be. I know what to do :))