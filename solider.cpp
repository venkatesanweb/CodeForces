#include<iostream>
using namespace std;
 
int main(){
    int a, b, c;
    cin >> a >> b >> c;

    int val = a * (c * (c + 1) / 2);
    int total = (val - b);

    if (total < 0) total = 0;

    cout << total;
    return 0;
}

