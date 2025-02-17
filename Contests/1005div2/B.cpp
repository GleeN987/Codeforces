#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[200005];
        map<int,int> c;
        for(int i=1;i<=n;i++){
            cin>>a[i]; c[a[i]]++;
        }
        int l=0,r=-1;
        int min = -1;
        for(int i = 1;i<=n;i++){
            if(c[a[i]]>1) {
                min=-1;
                continue;
            }
            if(min==-1) min=i;
            if(i-min>r-l){
                r=i; l=min;
            }
        }
        if(r==-1) cout<<0<<'\n';
        else cout<<l<<" "<<r<<'\n';
        }
        
}
