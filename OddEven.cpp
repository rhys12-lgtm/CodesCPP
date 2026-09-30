#include <iostream>
using namespace std;

int main() {
    int N;
    
    cout << "Enter an integer N: ";
    cin >> N;
    
    if (N < 1) {
        cout << "Please enter a positive integer." << endl;
        return 0;
    }
    
    int sumEven = 0, sumOdd = 0;
    
    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            sumEven += i;
        } else {
            sumOdd += i;
        }
    }
    
    cout << "\nSum of even numbers: " << sumEven << endl;
    cout << "Sum of odd numbers: " << sumOdd << endl;
    
    return 0;
}