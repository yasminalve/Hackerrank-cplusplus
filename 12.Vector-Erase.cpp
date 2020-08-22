#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    int n, temp, x, a, b;
    
    cin >> n;
    
    while (n--) {
        cin >> temp;
        v.push_back(temp);
    }
    cin >> x;
    v.erase(v.begin() + x - 1);
    
    cin >> a >> b;
    v.erase(v.begin() + a - 1, v.begin() + b - 1);
    
    cout << v.size() << endl;
    
    for (auto elemento: v) {
        cout << elemento << " ";
    }

    return 0;
}
