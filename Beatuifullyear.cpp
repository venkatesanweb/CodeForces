#include<iostream>
#include<set>
#include<string>
using namespace std;

bool distentyear(int year){
    set<char> st;
    string s=to_string(year);
    for(char ch:s){
        st.insert(ch);
    }
    return st.size()==s.size();
}
 
int main(){
    int year;
    cin>>year;
    while(true){
        year++;
        if(distentyear(year)){
            cout<<year;
            break;
        }
    }
    
        
    
    return 0;
}

