#include <iostream>
using namespace std;

int main () {

  int Array[7];

  for (int i=0; i < 7; i++) {
  cout << "Enter number: " << (i+1) << "= ";
  cin >> Array[i];
}

  cout << "\nNumbers you entered: ";
  for (int i=0; i < 7; i++) {
    cout << Array[i] << " ";
  }


return 0;
}