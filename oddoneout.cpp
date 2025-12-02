#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        vector<int>vc(3);
        map<int,int> mp;
        for(int i=0;i<3;i++){
            cin>>vc[i];
            mp[vc[i]]++;
        }
        
            for(auto s:mp){
                int key=s.first;
                int val=s.second;
                if(val%2!=0){
                    cout<<key<<endl;
                    break;
                }
            }
        
    }
    
    return 0;
}
