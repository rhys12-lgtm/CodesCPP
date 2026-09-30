#include <iostream>
using namespace std;

int main () {
  int TwoDimArray[3][4] = {
     
    {1,2,3,4},                          // first box = rows
    {5,6,7,8},                          // second box = columns
    {9,10,11,12}

  };

  for (int i=0; i<3; i++) {
    for (int j=0; j<4; j++) {
      cout << TwoDimArray[i][j] << " ";
    }
    cout << endl;
  }

 

  return 0;
}