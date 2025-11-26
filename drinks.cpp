#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    double sum=0;
    for(int i=0;i<n;i++){
        int b;
        cin>>b;
        sum+=b;
        
    }
    double avg=sum/n;
    printf("%.12f",avg);
    return 0;
}
