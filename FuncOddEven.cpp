#include <iostream>
using namespace std;

bool IsEven(int number) {
  if (number % 2 == 0) return true;
  else return false;

}

int main () {

int number;

cout << "Enter an integer: ";
cin >> number;

if (IsEven(number)) {
  cout << number << " is even";
}
else {
  cout << number << " is odd";
}


return 0;
}