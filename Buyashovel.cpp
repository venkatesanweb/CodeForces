#include <bits/stdc++.h>
using namespace std;

int main() {
    int n1,co;
    cin>>n1>>co;
    int count=1;
    while(true){
        if((n1*count)%10==co || (n1*count)%10==0){
            break;
        }
        count++;
    }
    cout<<count;
}

