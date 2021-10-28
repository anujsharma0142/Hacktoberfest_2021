#include <iostream>
#include <vector>

using namespace std;

void evenOddSubarray(vector<int> &a) {
    int n = a.size();
    int count = 1, res = 0;
    for (int i=0; i<n-1; i++) {
        if ((a[i]%2==0 && a[i+1]%2!=0)||(a[i]%2!=0 && a[i+1]%2==0))
            count++;
        else {
            res = max(res, count);
            count = 1;
        }
    }
    res = max(res, count);
    cout<<res;
}

int main() {
    vector<int> arr{1,2,7,7,5,2,2,4,1,2,3,4,5};
    evenOddSubarray(arr);
    return 0;
}
