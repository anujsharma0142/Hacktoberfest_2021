#include <iostream>
#include <vector>

using namespace std;

void maxSubarray(vector<int> &arr) {
    int n = arr.size();
    int res = arr[0];
    int maxSum = arr[0];
    for (int i=1; i<n; i++) {
        maxSum = max(arr[i], maxSum+arr[i]);
        res = max(res, maxSum);
    }
    cout<<res;
}

int main() {
    vector<int> arr{-5,1,-2,3,7,-1,2,-2};
    maxSubarray(arr);
    return 0;
}
