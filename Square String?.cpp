#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    while(n--){
        string s;
        cin>>s;
        int len=s.length();
        if(len%2==1){
            cout<<"NO"<<endl;
            continue;
        }
        else{
            string s1=s.substr(0,len/2);
            string s2=s.substr(len/2);
            if(s1==s2){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    
    return 0;
}
