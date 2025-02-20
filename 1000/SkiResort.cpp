#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n,k,q;
        cin>>n>>k>>q;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        long long cnt=0;
        long long ans=0;

        for(int i=0;i<n;i++){
            if(a[i]<=q){
                cnt++;
            }
            else{
                if(cnt>=k){
                    ans += (cnt*(cnt+1))/2 - ((k-1)*cnt - ((k-2)*(k-1)/2));
                }
                cnt = 0;
            }
        }
        if(cnt>=k){
            ans += (cnt*(cnt+1))/2 - ((k-1)*cnt - ((k-2)*(k-1)/2));
        }
        cout<<ans<<'\n';
    }
}