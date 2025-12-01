#include <bits/stdc++.h>
using namespace std;

pair<int,int> computeAB(const string &s, const string &t) {
    int n = s.size();
    int A = 0;
    vector<int> cs(10,0), ct(10,0);

    for (int i = 0; i < n; i++) {
        if (s[i] == t[i]) A++;
        else {
            cs[s[i]-'0']++;
            ct[t[i]-'0']++;
        }
    }

    int B = 0;
    for (int d = 0; d <= 9; d++) {
        B += min(cs[d], ct[d]);
    }

    return {A, B};
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<string> P12, P123, P1234;

    {
        string s = "12";
        sort(s.begin(), s.end());
        do P12.push_back(s);
        while (next_permutation(s.begin(), s.end()));
    }
    {
        string s = "123";
        sort(s.begin(), s.end());
        do P123.push_back(s);
        while (next_permutation(s.begin(), s.end()));
    }
    {
        string s = "1234";
        sort(s.begin(), s.end());
        do P1234.push_back(s);
        while (next_permutation(s.begin(), s.end()));
    }

    int t;
    cin >> t;
    while (t--) {
        int n, j, k;
        cin >> n >> j >> k;

        string a, b;
        if (n == 12) {
            a = P12[j-1];
            b = P12[k-1];
        } else if (n == 123) {
            a = P123[j-1];
            b = P123[k-1];
        } else {
            a = P1234[j-1];
            b = P1234[k-1];
        }

        auto [A, B] = computeAB(a, b);
        cout << A << "A" << B << "B\n";
    }
    return 0;
}

