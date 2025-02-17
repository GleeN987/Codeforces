#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int num;
        vector<int> res;
        map <int, vector<int>,greater<int>> m;
        for(int i=0;i<n;i++){
            cin>>num;
            if(num%k==0) res.push_back(i+1);
            else m[num%k].push_back(i+1);
        }
        
        for(auto i : m){
            for(int id : i.second){
                res.push_back(id);
            }
        }
        for(int id : res){
            cout<<id<<" ";
        }
        cout<<'\n';
    }
}
