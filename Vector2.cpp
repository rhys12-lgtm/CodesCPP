#include <iostream>
#include <vector>
using namespace std;

int main () {

  vector<int> V1 ={1,2,3,4,5,6};

  V1.push_back(7);
  V1.push_back(8);
  V1.push_back(9);

  
  cout << V1.capacity() << endl;
  cout << V1.size() << endl;

  V1.pop_back();

  cout << V1.capacity() << endl;
  cout << V1.size() << endl;

  
  return 0;
}