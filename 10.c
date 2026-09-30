#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num, originalNum, remainder, result = 0, count = 0;

    cout << "Enter an integer: ";
    cin >> num;

    originalNum = num;

    // Count the number of digits
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        count++;
    }

    temp = num;

    // Calculate sum of powered digits
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, count);
        temp /= 10;
    }

    // Output the result
    if (result == originalNum) {
        cout << originalNum << " is an Armstrong number." << endl;
    } else {
        cout << originalNum << " is NOT an Armstrong number." << endl;
    }

    return 0;
}
