#include<iostream>

using namespace std;

int factRec(int n) {
    if (n == 0)
        return 1;
    return n*factRec(n-1);
}

int factIti(int n) {
    int fact = 1;
    for(int i=1; i<=n; i++) 
        fact *= i;
    return fact;
}

int main() {
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Factorail using recursion: "<<factRec(n)<<endl;
    cout<<"Factorail using itiration: "<<factIti(n)<<endl;
    return 0;
}