#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a, b; 
    string name[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    cin >> a >> b;
    
    if (a <= b) {
        for (int i = a; i <= b; i++) {
            if (i >= 1 && i <= 9) cout << name[i-1] << endl;
            else {
                if (i % 2 == 0) cout << "even" << endl;
                else cout << "odd" << endl;
            }
        }
    
    }
    cin.ignore();

    return 0;
}
