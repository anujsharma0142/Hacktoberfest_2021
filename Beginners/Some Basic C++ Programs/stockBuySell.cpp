#include <iostream>
#include <vector>

using namespace std;

void maxProfit(vector<int> &price) {
    int profit = 0;
    int n = price.size();
    if (n < 2) return;
    for (int i=1; i<n; i++) {
        if (price[i] > price[i-1])
            profit += price[i] - price[i-1];
    }
    cout<<"Maximum possible profit is: "<<profit<<endl;
}

int main() {
    vector<int> arr{1, 5, 4, 3, 8, 12};
    maxProfit(arr);
    return 0;
}
