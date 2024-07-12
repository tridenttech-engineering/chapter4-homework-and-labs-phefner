// Introductory11.cpp - displays ending balance
// Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main() {
  //declarations of required variables
  double begin_balance,Total_deposits,Total_withdrawals,Final_balance;

  //Inputs for beginning balance,totaldeposits and Total_withdrawals
  cout << "Enter the beginning balance: ";
  cin >> begin_balance;
  cout << "Enter the total deposits: ";
  cin >> Total_deposits;
  cout << "Enter the total withdrawals: ";
  cin >> Total_withdrawals;

  //processing, now computes the final balance
  Final_balance = begin_balance + Total_deposits - Total_withdrawals;
  //display finale balance
  cout << "Month End Balance: " << Final_balance << endl;

  return 0;
} // end of main function