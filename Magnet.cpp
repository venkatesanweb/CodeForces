#include<iostream>
#include<set>
#include<string>
using namespace std;


int main(){
    int n,count=1;
    cin>>n;
    int val;
    cin>>val;
    for(int i=1;i<n;i++){
        int val2;
        cin>>val2;
        if(val!=val2){
            count++;
        }
        val=val2;
    }
        
    cout<<count;
    return 0;
}

