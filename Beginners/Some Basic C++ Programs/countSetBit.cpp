#include <iostream>

using namespace std;

// Brian Kerningam's Algorithm
int countSetBit(int n) {
    int res = 0;
    while (n > 0) {
        n = (n & (n - 1));
        res++;
    }
    return res;
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << countSetBit(n);
    return 0;
}

// Time Complexity: O(setBits)
// Aux Space Complexity: O(1)

/*
O(1) Time Compelxity solution requries creating a lookup table
int table[256];
table[0] = 0;
for(int i=1; i<256; i++)
    table[i] = (i&1) + table[i/2];
After doing that we can divide the interger in chunks of 8 bits 
and then calculate result with those bits using the lookukp table. i.e.,
res += table[n&0xff];
n>>8;
*/