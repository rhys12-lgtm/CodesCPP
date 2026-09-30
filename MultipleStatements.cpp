#include <iostream>
using namespace std;

int main() {
    int numbers[3];  // Array to store 3 numbers
    
    // Loop to get user input for each element
    for (int i = 0; i < 3; i++) {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> numbers[i];
    }
    
    // Print all stored numbers
    cout << "\nNumbers you entered: ";
    for (int i = 0; i < 3; i++) {
        cout << numbers[i] << " ";
    }
    
    return 0;
}