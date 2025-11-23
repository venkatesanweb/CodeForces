#include<iostream>
#include<set>
#include<string>
using namespace std;


int main(){
    int n,count=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int n1,n2;
        cin>>n1>>n2;
        if(n2-n1>=2){
            count++;
        }
    }
        
    cout<<count;
    return 0;
}

