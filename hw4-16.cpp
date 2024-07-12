//Advanced16.cpp
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
// firstly we declared the constant and variables
  const double increase = 1.05;

  double store1 = 0.0;
  double store2 = 0.0;
  

  //now we do the declaration and initialization of 3 int variables

  int store1int, store2int, totalint;

  cout << "Enter store1 sales:";
  cin >> store1;
  cout << "Enter store2 sales:";
  cin >> store2;

  //now we change the first assignment

  store1int = static_cast<int>(store2*increase * 100+.5);

  //now we change the second assignment
  store2int = static_cast<int>(store2*increase * 100+.5);

  //now we change the third assignment

  totalint = store1int + store2int;
  cout << fixed << setprecision(2);

  //*now we change the store1 in the second cout statement and then we change the third cout statement then we change the last cout statement

  cout << "Store1 sales: $" << store1int/100.0 << endl;
  cout << "Store2 sales: $" << store2int/100.0 << endl;
  cout << "Total sales: $" << totalint/100.0 << endl;
  
  return 0;
}	//end of main function

//1.  Declare and initalize three int variables named store1Int, store2Int, and totalInt
//2.  Change the first assignment statement to store1Int = static_cast<int>(store1 * increase * 100 + .5);
//3.  Change the second assignment statement to store2Int = static_cast<int>(store2 * increase * 100 + .5);
//4.  Change the third assignment statement to totalInt = store1Int + store2Int;
//5.  Change store1 in the second cout statement to store1Int / 100.0
//6.  Change store2 in the third cout statement to store2Int / 100.0
//7.  Change total in the last cout statement to totalInt / 100.0
