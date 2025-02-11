#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    vector<int> numbers;

    for (char c : s){
        if(c != '+'){
            numbers.push_back(c - '0');
        }
    }
    sort(numbers.begin(), numbers.end());
    stringstream ss;

    for(int i = 0; i<numbers.size(); ++i){
        if(i != 0){
            ss << "+";
        }
        ss << numbers[i];
    }
    cout << ss.str();
}