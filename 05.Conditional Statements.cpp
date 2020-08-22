#include <bits/stdc++.h>

using namespace std;

int main() {

    int n; 
    string name[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    cin >> n;
    
    if (n >= 1 && n <= 9) cout << name[n-1] << endl;
    else cout << "Greater than 9" << endl;
    
    cin.ignore(numeric_limits<streamsize>::max(), '\n');


    return 0;
}
