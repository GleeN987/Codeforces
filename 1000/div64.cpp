#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; 
    cin >> s;
 
    string ssub1 = s.substr(0, s.size()-6);
    int id = ssub1.find('1');
    if (id != string::npos){
        string ssub2 = s.substr(id+1);
        int count = 0;
        for (char c : ssub2){
            if(c == '0'){
                count++;
            }
        }
        if(count < 6){
            cout << "no";
        }
        else{
            cout << "yes";
        }
    }
    else{
        cout << "no";
    }
 
}