#include <iostream>
using namespace std;

int main () {

  int N[5];

  for (int i=0; i < 5; i++) {
  cout << "Enter number " << (i+1) << " : ";
  cin >> N[i]; 
  }


  cout << "\nNumbers Entered: ";
  for (int i=0; i < 5; i++) {
    cout << N[i] << " ";
    
  }

  return 0;
}