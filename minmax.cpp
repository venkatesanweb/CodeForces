#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    int min=0,max=0;
    if(a>b && a>c){
        max=a;
    }
    else if(b>c){
        max=b;
    }else{
        max=c;
    }
    if(a<b && a<c){
        min=a;
    }
    else if(b<c){
        min=b;
    }
    else{
        min=c;
    }
    int ans=max-min;
    cout<<ans;
    return 0;
}

