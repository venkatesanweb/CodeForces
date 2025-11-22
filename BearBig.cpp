#include<iostream>
#include<cctype>
using namespace std;

int main(){
   int a,b;
   cin>>a>>b;
   int s1=0;
   while(a<=b){
       a=a*3;
       b=b*2;
       s1++;
   }
    

    cout << s1;
}

