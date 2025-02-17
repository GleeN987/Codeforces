#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int,int> m;
    m.insert(pair<int,int>(10,20));

    for(auto j : m){
        cout << j.first;
    }
}

