#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        unordered_map<int, int> freq;

        for(int &x : a) {
            cin >> x;
            freq[x]++;
        }

        int ans = 0;
        for (auto &p : freq) {
            ans += p.second / 2;
        }

        cout << ans << "\n";
    }

    return 0;
}

