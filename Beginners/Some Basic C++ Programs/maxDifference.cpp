#include <iostream>
#include <vector>

using namespace std;

int maxDiff(vector<int> &arr) {
    int minVal = arr[0];
    int diff = 0;
    for (int i=1; i<arr.size(); i++) {
        diff = max(diff, arr[i] - minVal);
        minVal = min(minVal, arr[i]);
    }
    return diff;
}

int main() {
    vector<int> arr{1, 8, 2, 15, 12, 6, 7, 2, 8, 9, 6, 9};
    cout<<maxDiff(arr);
    return 0;
}
