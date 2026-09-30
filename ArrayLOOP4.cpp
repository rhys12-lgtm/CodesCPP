#include <iostream>
using namespace std;

int main () {

  int Array[] = {10,20,30,40,50,60};
  // INDEX       0  1  2  3  4  5
  int ArraySize = sizeof(Array) / sizeof(Array[0]);

  for (int i=0; i < ArraySize; i++) {
    cout << "Index number: " << i << " | Element: " << Array[i] << endl;
  }
  

  return 0;
}
