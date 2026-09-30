#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main () {

  vector<string> Hatdog = {"HELLO", "HI", "SUP!"};
  Hatdog.push_back("Ha?");
   Hatdog.push_back("Ha?");
    Hatdog.push_back("Ha?");
     Hatdog.push_back("Ha?");
      Hatdog.push_back("Ha?");
       Hatdog.push_back("Ha?");
        Hatdog.push_back("Ha?");
         Hatdog.push_back("Ha?");
          Hatdog.push_back("Ha?");
           Hatdog.push_back("Ha?");

  cout << Hatdog.capacity() << endl;
  cout << Hatdog.size() << endl;

  return 0;
}