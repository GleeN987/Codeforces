#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long k;
    int id;
    cin >> n >> k;
    vector<int> ids(n);
    for(int i = 0; i<n; i++){
        cin >> id;
        ids[i] = id;
    }

    long long l = 1;
    long long r = n;
    long long i = 0;
    while(l<=r){
        long long m = (l+r)/2;
        long long sum = (m * (m+1)) / 2;

        if(sum>=k){
            i = m;
            r = m - 1;
        }
        else{
            l = m + 1;
        }
    }
    long long pos = k - ((i-1) * i) / 2;
    cout << ids[pos-1];



}