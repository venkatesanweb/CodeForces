#include<iostream>
#include<string>
using namespace std;
 
int main(){
    int s;
    int k;
    cin>>s>>k;
    while(k!=0){
        int val=s%10;
        if(val!=0){
            s=s-1;
        }
        else{
            s=s/10;
        }
        k--;
    }
    cout<<s;
    return 0;
}

