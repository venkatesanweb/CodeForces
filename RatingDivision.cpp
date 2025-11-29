#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int b;
        cin>>b;
        if(b>=1900){
            cout<<"Division 1\n";
        }
        else if(b>=1600 && b<=1899){
            cout<<"Division 2\n";
        }
        else if(b>=1400 && b<=1599){
            cout<<"Division 3\n";
        }
        else{
            cout<<"Division 4\n";
        }
    }
    return 0;
    
}

