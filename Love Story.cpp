#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin>>s;
        string ss="codeforces";
        int co=0;
        for(int i=0;i<s.length();i++){
            if(s[i]!=ss[i]){
                co++;
            }
        }
        cout<<co<<endl;
        
    }
    return 0;
}

