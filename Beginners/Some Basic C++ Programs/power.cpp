#include <iostream>

using namespace std;

int power(int x, int n) {
    if (n == 0) return 1;
    long long temp = power(x, n / 2);
    temp = temp * temp;
    if (n % 2 == 0)
        return temp;
    else
        return temp * x;
}

void powerOptimised(int x, int n) {
    long long res = 1;
    while (n > 0) {
        if (n & 1)  // Checks if n is odd
            res *= x;
        x *= x;
        n = n >> 1;  // Divides by 2
    }
    cout << res;
}

int main() {
    int x, n;
    cout << "Enter number: ";
    cin >> x;
    cout << "Enter power: ";
    cin >> n;
    cout << power(x, n) << endl;
    powerOptimised(x, n);
    return 0;
}