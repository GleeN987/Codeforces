#include <bits/stdc++.h>
using namespace std;

int main(){
    set<char> set;
    string s;
    cin >> s;

    for(char c : s){
        set.insert(c);
    }
    
    if(set.size()%2==0){
        cout << "CHAT WITH HER!";
    }
    else{
        cout << "IGNORE HIM!";
    }
}