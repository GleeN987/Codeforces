#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int c1 = count(s.begin(),s.end(), '1'); 
        int c0 = count(s.begin(),s.end(), '0');
        if(c0 == c1){
            cout<<0<<'\n';
            continue;
        }

        for(int i = 0; i<s.size(); i++){
            if(s[i]=='0') c1--; 
            else c0--;
            if(c0<0 || c1<0){
                cout << s.size()-i<<'\n';
                break;
            }
        }

     
    }  
}
