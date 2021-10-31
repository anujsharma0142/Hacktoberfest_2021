#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int find(int N){
    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        a[i] = i + 1;
    }
    int pos = 0;
    while (a.size() > 1) {
        pos++;
        pos %= a.size();
        a.erase(a.begin() + pos);
    }
    return a[0];
    }
};
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.find(N) << endl;
    }
    return 0; 
} 
