#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,x; cin>>n>>x;
        vector<int> a(n);
        for(int i =0;i<n;i++){
            cin>>a[i];
        }

        int top = a[0];
        int bot = a[0];
        int change = 0;
        for(int i=1;i<n;i++){
            if(a[i]>top){
                top = a[i];
            }
            else if(a[i]<bot){
                bot = a[i];
            }

            if(abs(top)-abs(bot)>x*2){
                change++;
                if(i<n-1){
                    top = a[i];
                    bot = a[i];
                }
            }
        }
        cout<<change<<'\n';
    }
}