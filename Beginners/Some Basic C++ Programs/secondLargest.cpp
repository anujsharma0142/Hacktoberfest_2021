#include<iostream>
#include<vector>

using namespace std;

int secondLargest(vector <int> arr) {
    int res=-1, largest=0;
    for (int i=0; i<arr.size(); i++) {
        if (arr[i]>arr[largest]) {
            res = largest;
            largest = i;
        }
        else if (arr[i] != arr[largest]) {
            if (res == -1 || arr[i]>arr[res])
                res = i;
        }
    }
    return res;
}

int main() {
    vector <int> arr = {10, 12, 5, 13, 124, 50, 89};
    int index = secondLargest(arr);
    cout<<"Second largest element is: "<<arr[index]<<" at index: "<<index;
    return 0;
}