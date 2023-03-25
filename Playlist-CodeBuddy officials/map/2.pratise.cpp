#include <bits/stdc++.h>
#include <string>
#include <map>

using namespace std;

int main() {

    map<string, int> m;
    string name;

    int n;
    cout << "Enter the number of names: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> name;
        m[name]++;
    }

    map<string, int>::iterator it;
    cout << "Frequency of names: " << endl;
    for (it = m.begin(); it != m.end(); it++) {
        cout << it->first << " : " << it->second << endl;
    }

    return 0;
}
