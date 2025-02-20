#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
	cin.tie(0);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> b(n-2);
        for(int i=0;i<n-2;i++){
            cin>>b[i];
        }

        if(n<5) cout<<"YES"<<'\n';
        else{
            bool poss = true;
            for(int i=0;i<n-4;i++){
                if(b[i]==1 && b[i+1]==0 &&b[i+2]==1){
                    poss = false;
                }
            }
            if(poss) cout << "YES"<<'\n';
            else cout<<"NO"<<'\n';
        }
    }
}