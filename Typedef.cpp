#include <iostream>
using namespace std;

typedef string T;
typedef int N;

int main () {

  N age;
  T name;

  cout << "Enter age: ";
  cin >> age;

  cout << "Enter name: ";
  cin >> name;

  cout << "Hello " << name << ", your age is " << age;

  return 0;
}