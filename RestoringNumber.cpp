#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>a(4);
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int total=a[3];
    cout<<total-a[0]<<" "<<total-a[1]<<" "<<total-a[2];
}

