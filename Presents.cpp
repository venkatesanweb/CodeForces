#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> vc(n);
    for(int i = 0; i < n; i++){
        cin >> vc[i];
    }

    vector<int> af(n);

    for(int i = 0; i < n; i++){
        int giver = vc[i];
        af[giver - 1] = i + 1;
    }

    for(int i = 0; i < n; i++){
        cout << af[i] << " ";
    }

    return 0;
}

