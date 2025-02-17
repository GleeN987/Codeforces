#include <bits/stdc++.h>
using namespace std;


int n = 4; // Size of the set {0, 1, 2, 3, 4}
vector<int> subset; // Current subset being constructed
vector<vector<int>> allSubsets; // Vector to store all subsets

void search(int k) {
    if (k == n) {
        // Base case: All elements have been processed
        // Add the current subset to the allSubsets vector
        allSubsets.push_back(subset);
    } else {
        // Exclude k and recurse
        search(k + 1);

        // Include k and recurse
        subset.push_back(k);
        search(k + 1);

        // Backtrack: Remove k from the subset
        subset.pop_back();
    }
}

int main(){
    search(0); // Start the recursion with k = 0

    // Print all subsets
    cout << "All subsets of {0, 1, 2, 3, 4}:" << endl;
    for (auto subset : allSubsets) {
        cout << "{ ";
        for (int element : subset) {
            cout << element << " ";
        }
        cout << "}" << endl;
    }
}