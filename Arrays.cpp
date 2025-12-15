// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

void Unoinarr(vector<int> vc1,int n,vector<int>vc2,int m,vector<int>&vc3){
    int i=0,j=0;
    while(i<n && j<m){
        if(vc1[i]<vc2[j]){
            if(vc3.empty() || vc3.back()!=vc1[i]){
                vc3.push_back(vc1[i]);
            }
            i++;
        }
        else if(vc2[j]<vc1[i]){
            if(vc3.empty() || vc3.back()!=vc2[j]){
                vc3.push_back(vc2[j]);
            }
            j++;
        }
        else{
            if(vc3.empty() || vc3.back()!=vc1[i]){
                vc3.push_back(vc1[i]);
            }
            i++;j++;
        }
    }
    while(i<n){
        if(vc3.empty() || vc3.back()!=vc1[i]){
            vc3.push_back(vc1[i]);
        }
        i++;
    }
      while(j<m){
        if(vc3.empty() || vc3.back()!=vc2[j]){
            vc3.push_back(vc2[j]);
        }
        j++;
    }
}

int singleNumber(vector<int>& nums) {
       int max=0;
       for(int val:nums){
        max=max^val;
       }
       return max;
}


int main() {
    int n;
    cin>>n;
    vector<int> vc1(n);
    for(int i=0;i<n;i++){
        cin>>vc1[i];
    }
    int m;
    cin>>m;
    vector<int> vc2(m);
    for(int i=0;i<m;i++){
        cin>>vc2[i];
    }
    vector<int> vc3;
    Unoinarr(vc1,n,vc2,m,vc3);
    for(int val:vc3){
        cout<<val<<" ";
    }

    return 0;
}
