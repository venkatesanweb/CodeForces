#include<iostream>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;

    int co=0;
    int arr[a];
    for(int i=0;i<a;i++){
      int c;
      cin>>c;
      arr[i]=c;
    }
    int val=arr[b];
    for(int i=0;i<a;i++){
        if(arr[i]>=val && arr[i]>0){
            co++;
        }
    }
    
    cout<<co;
}
