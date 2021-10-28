#include<iostream>
#include<string>
#include<math.h>

using namespace std;

void powerSet(string s) {
    int n = s.size();
    int setSize = pow(2, n);
    for (int i=0; i<setSize; i++) {
        cout<<"'";
        for (int j=0; j<n; j++) {
            if (i&(1<<j))
                cout<<s[j];
        }
        cout<<"', ";
    }
}

int main() {
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    powerSet(s);
    return 0;
}