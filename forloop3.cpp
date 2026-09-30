#include <iostream>
using namespace std;

int main () {

  int n[4];
  int sum = 0;


  for (int i=0; i<4; i++) {
    cout << "Enter number: ";
    cin >> n[i];
  }

  cout << "\nNumbers entered:";
  for (int i=0; i<4; i++) {
  cout << n[i] << " ";
  sum += n[i];
  
  }

  cout << "\nTotal: " << sum;

  return 0;
}