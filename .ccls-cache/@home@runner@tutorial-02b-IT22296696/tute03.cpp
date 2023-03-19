/*Exercise 3 - Repeatition

Convert the C program given below which calculates the Factorial of a number
that you input from the keyboard to a C++ program.

Please Note that the input command in C++ is std::cin. This is a representation
of the Keyboard.*/

#include <iomanip>
#include <iostream>
int main() // main function begin
{
  int no; // variable declaration
  float fac;

  std::cout << "Enter a number :"; // get user inputs
  std::cin >> no;

  fac = 1;

  for (int r = no; r >= 1; r--) {
    fac = fac * r;
  }

  std::cout << "Factorical of " << no << " is " << fac;
  return 0;
} // end of the main function
