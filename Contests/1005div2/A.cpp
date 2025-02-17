#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt; cin>>tt;
    while(tt--){
        int n; string s;
        cin>>n;
        if(n == 0){
            cout << 0 <<'\n';
            continue;
        }
        cin>>s;
        string t = "";
        bool change = true;
        int count = 0;
        while(change){
        int one = s.find('1');
        if(one != string::npos){
            count++;
            t.append(s.substr(one));
            s.erase(one);
        }

        int zero = t.find('0');
        if(zero != string::npos){
            count++;
            s.append(t.substr(zero));
            t.erase(zero);
        }
        else{
            change = false;
        }
    }
        cout << count << '\n';
    }   
}
