#include<iostream>
#include<string>
using namespace std;
 
int main(){
    int a;
    cin>>a;
    int current=0;
    int maxi=0;
    for(int i=1;i<=a;i++){
        int ex,enter;
        cin>>ex>>enter;
        current-=ex;
        current+=enter;
        if(current>maxi){
            maxi=current;
        }
    }
    cout<<maxi;
    
        
    
    return 0;
}

