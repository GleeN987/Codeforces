#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x,y;
    for(int i = 0; i<n; i++){
        cin >> x >> y;
        if(x < 1 || y < 1){
            cout << "No" << endl;
        }
        else if(y-x == 1){
            cout << "Yes" << endl;
        }
        else if(x-y == 8){
            cout << "Yes" << endl;
        }
        else if((x-y)>8 && (x-y-8)%9 == 0){
            cout << "Yes" << endl;
        }
        else if(x%9 == 0 && y == 1){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    
}