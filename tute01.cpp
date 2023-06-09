
/*Exercise 1 - Calculations

Convert the C program given below which converts a length given in cm to inches
to a C++ program.

Please Note that the input command in C++ is std::cin. This is a representation
of the Keyboard.

e.g.

float data1;
int data2;
scanf("%f", &data1); --> std::cin >> data1;
scanf("%d", &data2); --> std::cin >> data2;
You already know that printf() in C is std::cout in C++ e.g.

printf("Hello World") --> std::cout << "Hello World";
2.54cm = 1 inch
*/

#include <iostream>

int main() // main function begins
{

  float cm, inches; // variable declaration

  std::cout << "Enter a length in cm :"; // get user inputs
  std::cin >> cm;

  inches = cm / 2.54;

  std::cout << "Length in inches is " << inches;

  return 0;
} // end of the main function
