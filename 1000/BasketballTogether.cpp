#include <bits/stdc++.h>
using namespace std;

int main(){
    
        int n;
        int d;
        cin>>n>>d;

        vector<int> a(n);
        for(int i =0;i<n;i++){
            cin>>a[i];
        }
  
        sort(a.begin(),a.end());
        int count = 0;
        int l = -1;
        int r = n-1;
        int curr = a[r];
        while(l<r){
            int maxpl = a[r];

            if(curr<=d){
                l++;
                curr+=maxpl;
            }
            else{
                count++;
                r--;

                if(r>=0) curr = a[r];
            }
            
        }
        cout<<count<<'\n';
    
}