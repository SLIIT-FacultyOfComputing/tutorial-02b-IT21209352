/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>

long Factorial(int no); //function prototypes
long nCr(int n, int r);

int main() {  // main function

  int n, r; //variables

  std::cout << "Enter a value for n "; //data inputs
  std::cin >> n;

  std::cout << "Enter a value for r "; // data inputs
  std::cin >> r;

  std::cout << "nCr = ";
  std::cout << nCr(n,r);  // displaying results
  std::cout << std::endl;

  return 0;
}

long Factorial(int no)//factorial function
{
  long fac = 1;  

    for (int r=no; r >= 1; r--) // loop for factorial
    {
        fac = fac * r;    //calculation
    }

  return fac;
}

long nCr(int n,int r)//nr function
{
  int N_minus_R_value = n - r;  //getting n-r value
  int final_value;               // and varibles

  final_value = (Factorial(n) / (Factorial(r)*Factorial(N_minus_R_value)));
  //calling factorial function,the calculation

  return final_value;
}
