#include <iostream>
#include <string>
using namespace std;

int main(){
    int size;
    int x = 0;

    cin >> size;
    string input;
    for(int i = 0; i<size; i++){
        cin >> input;
        if(input == "X++" || input == "++X"){
            x++;
        }
        else{
            x--;
        }
    }
    cout << x;

}