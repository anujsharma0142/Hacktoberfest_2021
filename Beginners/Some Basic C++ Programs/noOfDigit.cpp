#include<iostream>
#include<math.h>

using namespace std;

int rec(int n) {
    if (n == 0)
        return 0;
    return 1 + rec(n/10);
}

int iti(int n) {
    int count = 0;
    while (n > 0) {
        n = n/10;
        count++;
    }
    return count;
}

int log (int n) {
    return floor(log10(n) + 1);
}

int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Using recursion we get that number has "<<rec(n)<<" digits"<<endl;
    cout<<"Using itiration we get that number has "<<iti(n)<<" digits"<<endl;
    cout<<"Using logarithm we get that number has "<<log(n)<<" digits"<<endl;
    return 0;
}