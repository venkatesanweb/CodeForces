#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        if (n % 2 == 1) {
            cout << "NO\n";
            continue;
        }
        int m = n / 2;
        bool ok = true;
        for (int i = 0; i < m; ++i) {
            if (s[i] != s[i + m]) { ok = false; break; }
        }
        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}

