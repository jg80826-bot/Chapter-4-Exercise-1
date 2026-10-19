#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    cout << "Enter the first integer: ";
    cin >> num1;

    cout << "Enter the second integer: ";
    cin >> num2;

    int smaller = (num1 < num2) ? num1 : num2;
    int larger = (num1 > num2) ? num1 : num2;

    cout << "\nThe smaller number is: " << smaller << endl;
    cout << "The larger number is: " << larger << endl;

    return 0;
}