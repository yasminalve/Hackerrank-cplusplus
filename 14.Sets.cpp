#include <iostream>
#include <set>
using namespace std;

int main()
{
    set <int> v;
    int q, temp, temp2;
    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> temp >> temp2;
        if (temp == 1) v.insert(temp2);
        else if (temp == 2) v.erase(temp2);
        else if (temp == 3) {
            set<int> ::iterator ver = v.find(temp2);
            if (ver == v.end()) {
                cout << "No" << endl;
            } else {
                cout << "Yes" << endl;
            }
        }
    }

    return 0;
}
