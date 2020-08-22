#include <sstream>
#include <vector>
#include <iostream>

using namespace std;

vector<int> Ints(string str) {
    vector<int> vetor_temp;
    int int_temp;
    char lixo;
    stringstream input(str);
    
    while (input >> int_temp) {
        input >> lixo;
        vetor_temp.push_back(int_temp);
    }
    return vetor_temp;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = Ints(str);
    
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
