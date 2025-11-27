#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int p;
    cin>>p;
    set<int> sets;
    for(int i=0;i<p;i++){
        int n1;
        cin>>n1;
        sets.insert(n1);
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int n2;
        cin>>n2;
        sets.insert(n2);
    }
    if(n==sets.size()){
        cout<<"I become the guy.";
    }
    else{
        cout<<"Oh, my keyboard!";
    }
}
