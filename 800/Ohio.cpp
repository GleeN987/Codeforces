#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;

        bool hasConsecutive = false;
        for (int j = 0; j < word.size() - 1; j++) {
            if (word[j] == word[j + 1]) {
                hasConsecutive = true;
                break; // Exit the loop as we found a consecutive pair
            }
        }

        // Print 1 if there's a match, otherwise print the word's size
        if (hasConsecutive) {
            cout << 1 << endl;
        } else {
            cout << word.size() << endl;
        }
    }

    return 0;
}