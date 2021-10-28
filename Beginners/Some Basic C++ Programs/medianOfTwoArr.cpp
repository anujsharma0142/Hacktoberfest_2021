#include<iostream>
#include<vector>
 using namespace std;

 int main () {
    int med = -1, med2 = -1, i = 0, j = 0, count;
    vector<int>nums1 = {1, 2};
    vector<int>nums2 = {3, 4};
    int n = nums1.size();
    int m = nums2.size();
    if ((m + n) % 2 == 1) {
        for (int count = 0; count <= (n + m)/2; count++) {
            if(i != n && j != m)
                med = (nums1[i] > nums2[j]) ? nums2[j++] : nums1[i++];
            else if(i < n)
                med = nums1[i++];
            else
                med = nums2[j++];            
        }
        cout<<"Odd median: "<<med;
    } 
    else {
        for (count = 0; count <= (n + m)/2; count++) {
            med2 = med;
            if(i != n && j != m)
                med = (nums1[i] > nums2[j]) ? nums2[j++] : nums1[i++];
            else if(i < n)
                med = nums1[i++];
            else
                med = nums2[j++];
        }
        cout<<med<<" "<<med2<<endl;
        cout<<"Even median: "<<(med + med2)/2.0;
    }
    return 0;
 }