#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<string, int> pessoas;
    int q, y, tipo, after; string temp;
    
    cin >> q;
    
    for (int i = 0; i < q; i++) {
    
        cin >> tipo;
        if (tipo == 1) {
            cin >> temp >> y;
            auto itr = pessoas.find(temp);
            
            if (itr == pessoas.end()) { 
                pessoas.insert(pair<string, int>(temp, y));
            } else {
                after = itr -> second;
                pessoas[temp] = after + y;
            }
            
        } else if (tipo == 2) {
            cin >> temp;
            pessoas.erase(temp);
        } else if (tipo == 3) {
            cin >> temp;
            map<string, int> ::iterator it = pessoas.find(temp);
            
            if (it == pessoas.end()) {
                cout << "0" << endl;
            } else {
                cout << it -> second << endl;
            }
            
        } 
    }


    return 0;
}
