#include <iostream>
#include <vector>

using namespace std;

void Leader(vector<int> &arr) {
    int max = 0;
    for (int i=arr.size()-1; i>=0; i--) {
        if (arr[i] > max) {
            max = arr[i];
            cout<<arr[i]<<" ";
        }
    }
}

int main() {
    vector<int> arr{1, 8, 2, 15, 12, 6, 7, 2, 8, 9, 6, 9};
    Leader(arr);
    return 0;
}
