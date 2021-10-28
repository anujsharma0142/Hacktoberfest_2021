#include <iostream>
#include <vector>

using namespace std;

void freqSorted(vector<int> &arr) {
    int count = 1;
    int n = arr.size() - 1;
    if (n<0) return;
    if (n==0)
        cout<<arr[n]<<"'s count is: "<<count<<endl;
    for (int i=0; i<n; i++) {
        if (arr[i] == arr[i+1])
            count++;
        else {
            cout<<arr[i]<<"'s count is: "<<count<<endl;
            count = 1;
        }
    }
    cout<<arr[n]<<"'s count is: "<<count<<endl;
}

int main() {
    vector<int> arr{1};
    freqSorted(arr);
    return 0;
}
