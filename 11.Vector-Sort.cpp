#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int n, temp;
    vector <int> vet;
    cin >> n;
    
    while(n--) {
        cin >> temp;
        vet.push_back(temp);
    }
    
    sort (vet.begin(), vet.end());
    for (auto numero: vet) {
        cout << numero << " ";
    }
    return 0;
}
