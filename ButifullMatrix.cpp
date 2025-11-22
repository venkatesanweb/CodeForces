#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int arr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }
    int a=0,b=0;
    for(int i=0;i<5;i++){
        bool found=false;
        for(int j=0;j<5;j++){
            if(arr[i][j]==1){
                a=i;
                b=j;
                found=true;
                break;
            }
            if(found) break;
        }
    }
    int val=abs(a-2)+abs(b-2);
    cout<<val;
}
