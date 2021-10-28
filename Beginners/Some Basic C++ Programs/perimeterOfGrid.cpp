#include <iostream>
#include <vector>

using namespace std;

int main() {
    int p=0;
    vector<vector<int>> grid = {{0,1,0,0},
                                {1,1,1,0},
                                {0,1,0,0},
                                {1,1,0,0}};
    int row = grid.size();
    int col = grid[0].size();
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            if (grid[i][j] == 1) {
                p += 4;
                if (i>0 && grid[i-1][j] == 1)
                    p  -= 2;
                if (j>0 && grid[i][j-1] == 1)
                    p  -= 2;
            }
            cout<<"p at i: "<<i<<" j: "<<j<<" is: "<<p<<endl;
        }
    }
    cout<<p;
    return 0;
}