#include <iostream>

using namespace std;

void primeFactor(int n) {
    if (n <= 1) exit(0);
    for (int i = 2; i * i < n; i++) {
        while (n % i == 0) {
            cout << i << " ";
            n = n / i;
        }
    }
    if (n > 1) cout << n;
}

void primeFactorOptimal(int n) {
    if (n <= 1) exit(0);
    while (n % 2 == 0) {
        cout << "2 ";
        n /= 2;
    }
    while (n % 3 == 0) {
        cout << "3 ";
        n /= 3;
    }
    for (int i = 5; i * i < n; i += 6) {
        while (n % i == 0) {
            cout << i << " ";
            n /= i;
        }
        while (n % (i + 2) == 0) {
            cout << i + 2 << " ";
            n /= (i + 2);
        }
    }
    if (n > 3) cout << n;
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    primeFactor(n);
    cout << endl;
    primeFactorOptimal(n);
    return 0;
}