#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        long long n,k,b,s;
        cin>>n>>k>>b>>s;
        long long min = b*k;
        long long maks = b*k + (n*(k-1));
        if(s<min || s>maks) {
            cout<<"-1"<<'\n';
            continue;
        }
        long long e1;
        e1 = b*k;
        s-=e1;

        if(s>=k-1){
            e1+=(k-1);
            s-=(k-1);
        }
        else{
            e1+=s;
            s=0;
        }
        cout<<e1<<" ";

        for(int i = 1;i<n;i++){
            long long ei;
            
            if(s>=(k-1)){
                ei=(k-1);
                s-=ei;
            }
            else{
                ei=s;
                s=0;
            }
            cout<<ei<<" ";
        }
        cout<<'\n';
    }
}
