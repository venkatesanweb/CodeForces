#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,part,co=0;
    cin>>n>>part;
    int sum=0;
    for(int i=1;i<=n;i++){
        part+=i*5;
        if(part>240){
            break;
        }
        co++;
    }
    
    
    cout<<co;
    return 0;
}

