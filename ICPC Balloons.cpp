#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
   
    while (t--) {
        int a;
        cin>>a;
        string s;
        cin>>s;
        int co=0;
        set<char> st;
        for(char ch:s){
            if(!st.count(ch)){
                st.insert(ch);
                co+=2;
            }
            else{
                co+=1;
            }
        }
        cout<<co<<endl;
    }
    return 0;
}

