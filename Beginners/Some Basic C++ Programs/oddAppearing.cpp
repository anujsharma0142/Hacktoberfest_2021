#include <iostream>
#include <vector>

using namespace std;

void oddAppearing(vector<int> &arr, int n) {
    int XOR = 0, res1 = 0, res2 = 0;
    for (int i = 0; i < n; i++) XOR = XOR ^ arr[i];
    int sb = XOR & ~(XOR - 1); // Right most set bit
    for (int i = 0; i < n; i++) {
        if ((arr[i] & sb) != 0)
            res1 = res1 ^ arr[i];
        else
            res2 = res2 ^ arr[i];
    }
    cout << "Odd appearing numbers are: " << res1 << ", " << res2;
}

int main() {
    vector<int> arr{1, 8, 2, 1, 12, 6, 7, 2, 8, 9, 6, 9};
    int n = arr.size();
    oddAppearing(arr, n);
    return 0;
}