#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n; char c;
        string s;
        cin>>n>>c>>s;

        map<char,vector<int>> m;
        s.append(s);
        int nn = s.size();
        int lg=-1;
        int res = 0;
        for(int i=nn-1;i>=0;i--){
            if(s[i]=='g') lg = i;
            if(s[i]==c) res = max(res, lg-i);
        }
        cout<<res<<'\n';
    }
}