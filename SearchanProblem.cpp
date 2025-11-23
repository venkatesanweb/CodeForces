#include<iostream>
#include<set>
#include<string>
using namespace std;


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool ans=false;
    for(int val:arr){
        if(val==1){
            ans=true;
            break;
        }
    }
    if(ans){
        cout<<"HARD";
    }else{
        cout<<"EASY";
    }
        
    
    return 0;
}

