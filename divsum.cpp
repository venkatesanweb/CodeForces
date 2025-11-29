#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin>>a;
    for(int i=0;i<a;i++){
        string s;
        cin>>s;
        string sub=s.substr(0,3);
        string sub2=s.substr(3);
        int n1=stoi(sub);
        int n2=stoi(sub2);
        int sum1=0,sum2=0;
        while(n1!=0){
            sum1+=n1%10;
            n1/=10;
        }
        while(n2!=0){
            sum2+=n2%10;
            n2/=10;
        }
        if(sum1==sum2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
    
}

