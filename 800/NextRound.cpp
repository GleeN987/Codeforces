#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    vector<int> scores(n);
    int x;

    for(int i = 0; i<n; i++){
        cin >> scores[i];
    }

    int count = 0;
    for (int s : scores){
        if(s > 0 && s >= scores[k-1]){
            count++;
        }
    }
    cout << count;
}