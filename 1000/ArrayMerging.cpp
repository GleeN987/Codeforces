#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
	cin.tie(0);
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> b(n);
        set<int> elements;
        
        for(int i=0;i<n;i++){
            cin>>a[i];
            elements.insert(a[i]);
        }  
        for(int i=0;i<n;i++){
            cin>>b[i];
            elements.insert(b[i]);
        }   

        map<int, int> cnt1;
        map<int, int> cnt2;
        int cnt = 1;
        cnt1[a[0]] = 1;
        cnt2[b[0]] = 1;
        for(int i=1;i<n;i++){
            if(a[i] == a[i-1]){
                cnt++;
            }
            else{
                cnt = 1;
            }
            cnt1[a[i]] = max(cnt, cnt1[a[i]]);
        }

        cnt = 1;
        for(int i=1;i<n;i++){
            if(b[i] == b[i-1]){
                cnt++;
            }
            else{
                cnt = 1;
            }
            cnt2[b[i]] = max(cnt, cnt2[b[i]]);
        }
      
        int res = 1;
        for(int e : elements){
            res = max(res, cnt1[e]+cnt2[e]);
        }
        cout<<res<<'\n';
    }
}