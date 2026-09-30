#include <iostream>
#include <vector>
using namespace std;

int main () {

  vector<int> V1 ={1,2,3,4,5,6};

  V1.push_back(7);
  V1.push_back(8);
  V1.push_back(9);

  cout << "Using push_back:" << endl; // adds another element to the vector brackets

  cout << "Capacity: " << V1.capacity() << endl;
  cout << "Size: " << V1.size() << endl;
  cout << endl;


  cout << "Using pop_back:" << endl; // removes the last element inside the vector bracket
  V1.pop_back();

  cout << "Capacity: "<< V1.capacity() << endl;
  cout << "Size: " << V1.size() << endl;

  // The output size will decrease because the element is deducted so the size becomes 8
  // However, the capacity remains 12 because that is the preferred size currently...
  // Capacity starts with 4,8,12,24 and so on..
  return 0;
}