#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;

    while (q--) {
        long long a, b, n, S;
        cin >> a >> b >> n >> S;

        long long x = min(a, S / n);
        long long remaining = S - x * n;

        if (remaining <= b)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}

