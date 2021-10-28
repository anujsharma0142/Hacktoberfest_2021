#include <iostream>
#include <string>

using namespace std;

void isPalindrome(int n) {
    int temp = 0;
    int temp2 = n;
    while (n > 0) {
        temp = temp * 10 + n % 10;
        n = n / 10;
    }
    if (temp == temp2)
        cout << "Int implementation: Given number is Palindrome" << endl;
    else
        cout << "Int implementation: Given number is not Palindrome" << endl;
}

void isPalindromeStr(int n) {
    string s = to_string(n);
    int size = s.size();
    for (int i = 0; i < size / 2; i++) {
        if (s[i] != s[size - i - 1]) {
            cout << "Str implementation: Given number is not Palindrome";
            exit(0);
        }
    }
    cout << "Str Implementation: Given number is Palindrome";
}

int main() {
    int n = 0;
    cout << "Enter the number: ";
    cin >> n;
    isPalindrome(n);
    isPalindromeStr(n);
    return 0;
}