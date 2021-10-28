#include <iostream>
using namespace std;

void towerOfHanoi(int n, char from, char to, char aux_rod) {
    if (n == 1) {
        cout << "Move disk 1 from rod " << from << " to rod " << to << endl;
        return;
    }
    towerOfHanoi(n - 1, from, aux_rod, to);
    cout << "Move disk " << n << " from rod " << from << " to rod " << to
         << endl;
    towerOfHanoi(n - 1, aux_rod, to, from);
}

// Driver code
int main() {
    int n = 4;                       // Number of disks
    towerOfHanoi(n, 'A', 'C', 'B');  // A, B and C are names of rods
    return 0;
}