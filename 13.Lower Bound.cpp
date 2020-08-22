#include <iostream>
#include <vector>
using namespace std;

void pesquisa(vector<int> v, int tentativa);

int main()
{
    vector<int> v;
    int n, temp, x, a, b;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> temp;
        v.push_back(temp);
    }
    
    cin >> x;
    
    for (int i = 0; i < x; i++) {
    
        cin >> a;
        vector<int> ::iterator ver = lower_bound(v.begin(), v.end(), a);
        
         if (v[ver - v.begin()] == a) {
            cout << "Yes " << ver - v.begin() + 1 << endl; 
        } else {
            cout << "No " << ver - v.begin() + 1 << endl;
    
        }
    }

    return 0;
}
