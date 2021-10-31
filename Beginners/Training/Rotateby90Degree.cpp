#include<bits/stdc++.h>
using namespace std;
void rotate (vector<vector<int> >& matrix);
void rotate(vector<vector<int> >& matrix)
{
    if(matrix.size()==1)
    goto xy;
    // Your code goes here
    for(int i=0;i<matrix.size();i++)
    {
        for(int j=0;j<i;j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    for(int i=0;i<matrix.size();i++)
    {
        for(int j=0,k=matrix.size()-1;j<=matrix.size()/2,k>=matrix.size()/2;j++,k--)
        {
            swap(matrix[j][i],matrix[k][i]);
        }
    }
    xy:
    matrix;
}
int main()
{
    int t;
    cin>>t; 
    while(t--)
    {
        int n;
        cin>>n; 
        vector<vector<int> > matrix(n);
        for(int i=0; i<n; i++)
        {
            matrix[i].resize(n);
            for(int j=0; j<n; j++)
                cin>>matrix[i][j]; 
        }
        rotate(matrix);
        for (int i = 0; i < n; ++i)
        {
            for(int j=0; j<n; j++)
                cout<<matrix[i][j]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}
