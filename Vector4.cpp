#include <iostream>
#include <vector>
using namespace std;

int main () {

  vector<int> V1 ={1,2,3,4,5,6};

  V1.push_back(7);
  V1.push_back(8);
  V1.push_back(9);

  cout << "Using push_back:" << endl; 

  cout << "Capacity: " << V1.capacity() << endl;
  cout << "Size: " << V1.size() << endl;
  cout << endl;


  cout << "Using pop_back:" << endl; 
  V1.pop_back();
  V1.pop_back();
  V1.pop_back();

  V1.shrink_to_fit(); // This command shrinks the capacity to make it same like the size :)

  cout << "Capacity: "<< V1.capacity() << endl;
  cout << "Size: " << V1.size() << endl;

  return 0;
}