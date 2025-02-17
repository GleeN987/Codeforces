#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, d, s;
    cin>>n>>d;
    int songs[n];
    int time = (n-1)*10;
    for(int i = 0; i<n; i++){
        cin >> s;
        songs[i]=s;
        time+=s;
    }
    int jokes = (n-1)*2 + (d-time)/5;
    if(time>d){
        cout << -1;
    }
    else{
        cout << jokes;
    }
}