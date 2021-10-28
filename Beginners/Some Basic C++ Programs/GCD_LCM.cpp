#include<iostream>

using namespace std;

int GCD(int a, int b) {
    if (b == 0)
        return a;
    return GCD(b, a%b);
}

int main() {
    int a, b;
    cout<<"Enter frist number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"GCD is: "<<GCD(a, b)<<endl;
    cout<<"LCM is: "<<(a*b)/GCD(a,b);
    return 0;
}