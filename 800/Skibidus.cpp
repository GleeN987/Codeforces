#include <string>
#include <iostream>
using namespace std;

int main(){
    int s;
    cin >> s;

    for(int i = 0; i<s; i++){
        string x;
        cin >> x;
        x.replace(x.size()-2, 2, "i");
        cout << x << endl;

    }

}