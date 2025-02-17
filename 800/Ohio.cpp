#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    for(int i = 0; i<n; i++){
        bool reduce = false;
        cin >> s;
        for(int i = 0; i<s.size()-1;i++){
            if(s[i]==s[i+1]){
                reduce = true;
            }
        }
        if(reduce){
            cout << 1 << '\n';
        }
        else{
            cout << s.size() << '\n';
        }
    }


}