#include <iostream>
using namespace std;

int main () {
  char Array[] = {'S','A','B','C','D'};
  int choice;

  cout << "Enter number 0-4: ";
  cin >> choice;

  if (choice==0) {
    cout << "Rank: " << Array[0];
  }

  else if (choice==1) {
    cout << "Rank: "<< Array[1];
  }

  else if (choice==2) {
    cout << "Rank: " << Array[2];
  }
  
  else if (choice==3) {
    cout << "Rank: " << Array[3];
  }
  
  else if (choice==4) {
    cout << "Rank: " << Array[4];
  }

  else {
    cout << "ERROR!";
  }
  

  return 0;
}