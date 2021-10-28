#include <iostream>

using namespace std;

void powerOfTwo(int n) {
    if (n != 0 && (n & (n - 1)) == 0)
        cout << "Number is power of two";
    else
        cout << "Number is not power of two";
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    powerOfTwo(n);
    return 0;
}