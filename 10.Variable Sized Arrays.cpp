#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
       int n, q, temp, k, l, c;
       vector <int> i;
       vector <vector <int>> j;

       cin >> n >> q;

       for (int x = 0; x < n; x ++) {
         cin >> k;
         
         for (int y = 0; y < k; y ++) {
           cin >> temp;
           i.push_back(temp);
         }
         
         j.push_back(i);
         i.clear();
         
       }
       
       while(q--) {
         cin >> l >> c;
         cout << j [l][c] << endl;
       }
       
       
    return 0;
}
