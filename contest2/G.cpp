#include <iostream>
using namespace std;

void solve() {
    long long n, s;
    cin >> n >> s;
    long long max_sum = n * (n + 1) / 2;
    if (s > max_sum) {
        cout << -1 << "\n";
        return;
    }
    for (long long i = n; i >= 1; i--) {
        if (i <= s) {
            cout << i << " "; 
            s -= i;           
        }
        if (s == 0) {
            break;
        }
    }
    
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}