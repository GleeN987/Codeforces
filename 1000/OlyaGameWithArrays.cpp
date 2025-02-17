#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int s, m;
        vector<vector<int>> a(n);
        for(int i=0;i<n;i++){
            cin >> s;
            for(int j=0;j<s;j++){
                cin>>m;
                a[i].push_back(m);
            }
        }
        long long min = INT_MAX;
        vector<int> sum(n);
        for(int i=0;i<n;i++){
            vector<int> curr = a[i];
            sort(curr.begin(),curr.end());
            sum[i]=curr[1];
            if(curr[0]<min) min = curr[0];
        }
        long long res=min;
        sort(sum.begin(),sum.end());
        for(int i=1;i<n;i++){
            res+=sum[i];
        }
        cout<<res<<'\n';
    }
}