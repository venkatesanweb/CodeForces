#include<iostream>
#include<cctype>
using namespace std;
 
int main(){
    int v;
    cin>>v;
   string s;
   cin>>s;
   int co=0;
   for(int i=1;i<s.length();i++){
       if(s[i-1]==s[i]){
           co++;
       }
   }
   cout<<co;
   return 0;
}
