#include <iostream>
#include <string>

using namespace std;

int main() {
	string a, b;
    int tam_a, tam_b;
    char temp;

    cin >> a;
    cin >> b;

    tam_a = a.size();
    tam_b = b.size();

    cout << tam_a << " " << tam_b << endl;
    cout << a << b << endl;
    
    temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    
    cout << a << " " << b << endl;


    return 0;
}
