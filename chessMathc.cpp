#include<iostream>
#include<string>
using namespace std;
 
int main(){
    int n;
    cin >> n;    
    string s;
    cin >> s;

    int az = 0, dz = 0;

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == 'A')
            az++;
        else
            dz++;
    }

    if(az > dz){
        cout << "Anton";
    }
    else if(az < dz){
        cout << "Danik";
    }
    else{
        cout << "Friendship";
    }
    
    return 0;
}

