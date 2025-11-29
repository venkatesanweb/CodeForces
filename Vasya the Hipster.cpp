#include <bits/stdc++.h>
using namespace std;

int main() {
    int red,blue;
    cin>>red>>blue;
    int days=0,wired=0;
    days=min(red,blue);
    wired=abs(red-blue);
    int ans=wired/2;
    cout<<days<<" "<<ans;
    return 0;
    
}

