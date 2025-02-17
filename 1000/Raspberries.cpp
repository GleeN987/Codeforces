#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        vector<int> a(n);
        for(int i = 0;i<n;i++){
            cin >> a[i];
        }
        if(k == 4){
            if(n<2){
                cout<<k-a[0]%k<<'\n';
            }
            int c = 0;
            int r = 4;
            for(int num : a){
                r = min(r, 4-num%4);
                if(num%2==0){
                    c++;
                }
                if(num%4==0) r=0;
                
            }
            cout<<min(r, max(0, 2-c))<<'\n';
        }
        else{
        int r = k;
        for(int num : a){
            if(num%k==0){
                r=0;
                break;
            }
            r = min(r, k-num%k);
        }
        cout<<r<<'\n';
        }
    }
}