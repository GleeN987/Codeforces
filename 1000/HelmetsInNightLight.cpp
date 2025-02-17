#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        long long n,p;
        cin>>n>>p;
        vector<int> a(n);
        vector<int> b(n);
        for(int i = 0; i<n;i++){
            cin>>a[i];
        }
        for(int i = 0; i<n;i++){
            cin>>b[i];
        }
        map<long long,long long> m;
        for(int i = 0; i<n; i++){
            if(m.find(b[i]) != m.end()){
                m[b[i]]+=a[i];
        
            }
            else{
                m[b[i]] = a[i]; 
            }
        }
        

        long long sum = 0;
        n--;
        long long r = p;
        for (const auto& pair : m) {
            if(n>0 && pair.first<p){
                if(pair.second>=n){
                    r+=(n*pair.first);
                    n=0;
                }
                else{
                    r+=(pair.first * pair.second);
                    n-=pair.second;
                }
            }
        }
        r+=p*n;
        cout<<r<<'\n';
        
        
        
    
    }
}