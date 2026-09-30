#include <iostream>
using namespace std;

int main () {

  int Array[6] = {5,10,15,20,25,30};

  while (Array[5]<=80) {
    cout << Array[5] << endl;
    Array[5]++;
  }

  return 0;
}