#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int i;
    long j; 
    char a;
    float k;
    double l;

    cin >> i >> j >> a >> k >> l;
    
    cout << fixed;
    cout << i << endl << j << endl << a << endl;
    cout << fixed << setprecision(3) << k << endl;
    cout << fixed << setprecision(9)  << l;
    
    return 0;
}
