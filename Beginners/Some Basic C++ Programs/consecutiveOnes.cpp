#include <iostream>
#include <vector>

using namespace std;

void Ones(vector<int> &arr) {
    int count = 0, res = 0;
    int n = arr.size();
    for (int i=0; i<n;i++) {
        if (arr[i] == 1)
            count++;
        else {
            res = max(res, count);
            count = 0;
        }
    }
    res = max(res, count);
    cout<<res;
}

int main() {
    vector<int> arr{1,0,0,0,0,1,1,1,0,0,0,1,0,1,1,1,0,1,1,1,1,1,1,1};
    Ones(arr);
    return 0;
}
