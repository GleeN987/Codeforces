#include <iostream>
using namespace std;

int main(){
    int s;
    cin >> s;
    int count = 0;
    for(int i = 0; i<s; i++){
        int j, k, l;
        cin >> j >> k >> l;

        if(j+k+l >= 2){count++; }
    }
    cout << count;
}