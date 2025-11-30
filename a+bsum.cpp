#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin>>a;
    for(int i=0;i<a;i++){
        int n1;
        cin>>n1;
        int sum=0;
        while(n1!=0){
            sum+=n1%10;
            n1/=10;
        }
        cout<<sum;
    }
    return 0;
    
}
