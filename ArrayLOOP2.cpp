#include <iostream>
using namespace std;

int main () {

  int Array[6] = {10,20,30,40,50,60};

  do {
    cout << Array[5] << endl;
    Array[5]++;
  } while (Array[5]<=200);

  return 0;
}