#include <iostream>
#include <vector>
using namespace std;

int main () {

  vector<int> V1 = {4,5,6,7,};

  V1.insert(V1.begin() ,2);
  V1.insert(V1.begin() ,3);

  cout << V1[0];

  return 0;
}