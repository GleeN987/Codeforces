#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n;
        int nums[n];
        bool sorted = true;
        for(int i = 0 ;i<n;i++){
            cin >> x;
            nums[i] = x;
        }

        for(int i = 0; i<n; i++){
            if(nums[i] != i+1){
                sorted = false;
                break;
            }
        }
        
        if(sorted){
            cout << 0 << '\n';
        }
        else if(nums[0] == n && nums[n-1] == 1){
            cout << 3 << '\n';
        }
        else if(nums[0] == 1 || nums[n-1] == n){
            cout << 1 << '\n';
        }
        else{
            cout << 2 << '\n';
        }
    }
}
