#include <iostream>
#include <string>

using namespace std;

void substring(string s, string curr, int i) {
    if (i == s.size()) {
        cout <<"'"<<curr<<"'"<<" ";
        return;
    }
    substring(s, curr, i+1);
    substring(s, curr + s[i], i+1);
}

int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;
    substring(s, "", 0);
    return 0;
}