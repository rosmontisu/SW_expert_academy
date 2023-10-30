#include <bits/stdc++.h>
using namespace std;

int main(void) {
    vector<int> v1 = { 1, 2, 3, 4, 5, 6 };
    
    // range based for loop
    for (int e : v1) {
        cout << e << ' ';
    }
    
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << ' ';
    }
    
    // WRONG
    for (int i = 0; i <= v1.size()-1; i++) {
        cout <, v1[i] << ' ';
    }
}
