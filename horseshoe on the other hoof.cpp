#include <bits/stdc++.h>
using namespace std;

int main() {
    long long s1, s2, s3, s4;
    if (!(cin >> s1 >> s2 >> s3 >> s4)) return 0;
    unordered_set<long long> st = {s1, s2, s3, s4};
    cout << (4 - (int)st.size()) << '\n';
    return 0;
}

