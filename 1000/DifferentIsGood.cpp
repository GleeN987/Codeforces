#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    int changes = 0;
    cin >> n >> s;
    if(n > 26){
        cout << -1;
    }
    else{
        set<char> chars;
        for(int i = 0; i<n; i++){
            if(chars.count(s[i]) == 0){
                chars.insert(s[i]);
            }
            else{
                changes++;
            }
        }
        cout<<changes;
    }
    
}   
