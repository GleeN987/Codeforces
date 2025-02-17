#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;
    int a = 0,d;
    for(char c : s){
        if (c=='A'){
            a++;
        }
    }
    d=n-a;
    if(a>d){
        cout << "Anton";
    }
    else if(d>a){
        cout << "Danik";
    }
    else{
        cout << "Friendship";
    }
}