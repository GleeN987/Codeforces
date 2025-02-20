#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        map<char, int> a;
        map<char, int> b;

        for(char c : s){
            a[c]+=1;
        }
        int res = 2;
        for(int i=0; i<n-1;i++){
            if(a[s[i]]==1)
                a.erase(s[i]);
            else
                a[s[i]]--;

            b[s[i]]++;
            
            int curr = a.size() + b.size();
            res = max(res, curr);
        }
        cout<<res<<'\n';

    }
}