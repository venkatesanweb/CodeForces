#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long n;
        cin >> n;
        if (n % 2 == 0) {
            cout << n/2 << " " << n/2 << "\n";
            continue;
        }
        long long p = n;
        for (long long d = 3; d * d <= n; d += 2) {
            if (n % d == 0) {
                p = d;
                break;
            }
        }
        if (p == n) {
            cout << 1 << " " << n - 1 << "\n";
        } else {
            long long g = n / p;
            cout << g << " " << n - g << "\n";
        }
    }
    return 0;
}

