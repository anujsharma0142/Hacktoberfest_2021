#include <iostream>

using namespace std;

void divisors(int n) {
    int i;
    for (i = 1; i * i < n; i++) {
        if (n % i == 0) cout << i << " ";
    }
    for (; i >= 1; i--) {
        if (n % i == 0) cout << n / i << " ";
    }
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << "All divisors are: ";
    divisors(n);
    return 0;
}       