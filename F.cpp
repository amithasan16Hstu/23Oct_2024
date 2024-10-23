#include <bits/stdc++.h>
using namespace std;

void Find_Array(int n) {
    vector<int> sequence;
    
   
    for (int i = 2; i < n + 2; ++i) {
        sequence.push_back(i);
    }

    
    for (int i = 0; i < n; ++i) {
        cout << sequence[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;  
    
    while (t--) {
        int n;
        cin >> n;
        Find_Array(n);  
    }
    
    return 0;
}
