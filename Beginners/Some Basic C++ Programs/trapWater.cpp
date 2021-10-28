#include <iostream>
#include <vector>

using namespace std;

void trapWater(vector<int> &arr) {
    int res = 0;
    int n = arr.size();
    int lMax[n], rMax[n];
    lMax[0] = arr[0];
    for (int i=1; i<n; i++)
        lMax[i] = max(arr[i], lMax[i-1]);
    rMax[n-1] = arr[n-1];
    for (int i=n-2; i>=0; i--)
        rMax[i] = max(arr[i], rMax[i+1]);
    for (int i=1; i<n-1; i++)
        res = res + (min(lMax[i], rMax[i])-arr[i]);
    cout<<res;
}

int main() {
    vector<int> arr{5, 0, 6, 2, 3};
    trapWater(arr);
    return 0;
}
