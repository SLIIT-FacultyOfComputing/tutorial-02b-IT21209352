/*Exercise 3 - Repeatition

Convert the C program given below which calculates the Factorial of a number that you input from the keyboard to a C++ program.

Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include <iostream> //header files
using namespace std;

int main() // main function
{
    int no; // variables for number and Factorial
    long fac;

    cout << "Enter the number : " ;   //data inputs and assigns
    cin >> no;

    fac = 1;  
    for (int r=no; r >= 1; r--) // loop for factorial
    {
        fac = fac * r;    //calculation
    }

    cout << "\nFactorial of "<<no << " is "<<fac; //displaying reasult

    return 0;
}
