#include <iostream>
#include <vector>
using namespace std;

void solve(int n, int k) {
    // Print numbers from 1 to k
    for (int i = 1; i <= k; ++i) {
        cout << i << " ";
    }

    // Print numbers from n to k+1 in reverse order
    for (int i = n; i > k; --i) {
        cout << i << " ";
    }

    cout << endl;
}

int main() {
    int t;
    cin >> t;  // Number of test cases

    while (t--) {
        int n, k;
        cin >> n >> k;  // Read values of n and k
        solve(n, k);    // Call the function to solve the case
    }

    return 0;
}
