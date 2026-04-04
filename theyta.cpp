#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n,m,a;
    cin>>n>>m>>a;
    long long an1=(n+a-1)/a;
    long long an2=(m+a-1)/a;
    cout<<an1*an2;

    return 0;
}
