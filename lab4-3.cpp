//Lab4-3.cpp - displays a salesperson's commission
//Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main()
{
  //declare named constants and variables
  const double COMM_RATE = 0.1;
  double sales = 267.90;
  double commission = 0.15;

  //enter input item
  cout << "Sales amount: ";
  cin >> sales;

  //calculate and display the commission
  commission = sales * COMM_RATE;
  cout << "Commission: $" << commission << endl;

  return 0;

} //end of main function
