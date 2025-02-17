#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int e; cin>>e;
        cout << 100/gcd(100,e) << '\n';
    }
}