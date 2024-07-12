// Intermediate14.cpp - displays total sold and percentages of small, medium,
// large, and family sold Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main() {
  //  variable declarations
  float total, small, medium, large, family;

  // Prompt the user to enter the number of small, medium, large, and family
  // the number of pizzeria sold for each type
  cout << "Enter the number of";
  cout << "pizzeria sold for each type: \n";
  cout << "Small: ";
  cin >> small;
  cout << "Medium: ";
  cin >> medium;
  cout << "Large: ";
  cin >> large;
  cout << "Family: ";
  cin >> family;
  // Calculate the total
  total = small + medium + large + family;

  // Calculate the percentages of
  //the total number contributed
  // by each different size
  cout << "\n total # of pizzeria sold: " << total << endl;
  cout << "Percentage of small pizzeria sold: " << (small / total) * 100 << endl;
  cout << "Percentage of medium pizzeria sold: " << (medium / total) * 100 << endl;
  cout << "Percentage of large pizzeria sold: " << (large / total) * 100 << endl;
  cout << "Percentage of family pizzeria sold: " << (family / total) * 100 << endl;

  return 0;
} // end of main function