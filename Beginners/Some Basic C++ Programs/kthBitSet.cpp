#include <iostream>

using namespace std;

int main() {
    int x, k;
    cout << "Enter number: ";
    cin >> x;
    cout << "Enter Kth place: ";
    cin >> k;
    if (x >> (k - 1) & 1)
        cout << "Kth bit is set";
    else
        cout << "Kth bit isn't set";
    return 0;
}