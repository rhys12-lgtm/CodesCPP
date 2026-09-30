#include <iostream>
using namespace std;

void Function1(string Name, int Age) {

    cout << "Name: " << Name << endl;
    cout << "Age: " << Age << endl;

}

void Function2(char Rank) {

    cout << "Rank: " << Rank << endl;

}
int main () {

  Function1("Jeofrey", 18);
  Function2('S');
  
  return 0;
}