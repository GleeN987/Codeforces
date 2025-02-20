#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
	cin.tie(0);
    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a=1,b=1;
        for(long long i = 2;i*i<=n;i++){
            if(n%i==0){
                a=n/i;
                break;
            }
        }
        if(a==1)b=n-1;
        else b=n-a;

        cout<<a<<" "<<b<<'\n';
    }
}