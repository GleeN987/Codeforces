#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int l = 0; int u;
    for(char c : s){
        if(c >= 97 && c <= 122){
            l++;
        }
    }
    u = s.size()-l;
    
    if(l>=u) transform(s.begin(), s.end(), s.begin(), ::tolower);
    else transform(s.begin(), s.end(), s.begin(), ::toupper);
    
    
    cout << s;
} 