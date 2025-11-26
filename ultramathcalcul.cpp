#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    string ans = "";
    for (int i = 0; i < a.size(); i++) {
        ans += (a[i] != b[i]) ? '1' : '0';
    }

    cout << ans;
    return 0;
}

