#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        int i = 0, j = 0;
        bool ok = true;

        while (i < n && j < n) {
            if (a[i] == b[j] || a[i] + 1 == b[j]) {
                i++;
                j++;
            } else if (a[i] < b[j] - 1) {
                ok = false;
                break;
            } else {
                j++;
            }
        }

        if (i < n) ok = false;

        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}

