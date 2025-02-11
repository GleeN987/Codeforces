#include <bits/stdc++.h>
using namespace std;

int main(){
    int x = 10;
    int* ptr = &x;
    cout << ptr <<endl;

    int& ref = x;
    cout << ref <<endl;

    int* ptr2 = &ref;
    cout << ptr2 <<endl;

    int a = 5;    // 0101 in binary
    int b = 3;    // 0011 in binary
    int c = a & b;
    cout << c;
}