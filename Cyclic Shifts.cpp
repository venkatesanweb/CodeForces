#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string n;
        int j, k;
        cin >> n >> j >> k;

        sort(n.begin(), n.end());
        vector<string> perms;
        do {
            perms.push_back(n);
        } while (next_permutation(n.begin(), n.end()));

        string a = perms[j - 1];
        string b = perms[k - 1];

        int A = 0, B = 0;
        int len = a.size();

        vector<bool> usedA(len, false), usedB(len, false);

        for (int i = 0; i < len; i++) {
            if (a[i] == b[i]) {
                A++;
                usedA[i] = usedB[i] = true;
            }
        }

        for (int i = 0; i < len; i++) {
            if (usedA[i]) continue;
            for (int j = 0; j < len; j++) {
                if (!usedB[j] && a[i] == b[j]) {
                    B++;
                    usedB[j] = true;
                    break;
                }
            }
        }

        cout << A << "A" << B << "B\n";
    }

    return 0;
}

