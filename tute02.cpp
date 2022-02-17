/*Exercise 2 - Selection

Convert the C program given below which calculates an employee's salary to a C++ program.

Input Type, Salary, otHours

Type = 1
OtRate = 1000
Type = 2
OtRate = 1500
Type = 3
OtRate = 1700
Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include <iostream>   //header files
using namespace std;

int main()    //main function
{
    double salary, netSalary;   //variables
    int etype, otHrs, otRate; 
   
    cout << "\nEnter the employee type : "; // data inputs
    cin >> etype;                           // and assigns

    cout << "\nEnter Salary : " ;
    cin >> salary;

    cout << "\nEnter the number of OT hours : ";
    cin >> otHrs;

    switch (etype) {  //using switch for selection
      case 1 :
          otRate = 1000;
          break;
      case 2 :
          otRate = 1500;
          break;
      default :
          otRate = 1700;
          break;
   }

    netSalary = salary + otHrs* otRate;     // calculation
    cout << "\nThe net salary is : "<< netSalary; // displaying result
  
  return 0;
}
