#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    set<char> letters;

    for (char ch : s) {
        if (ch >= 'a' && ch <= 'z') {
            letters.insert(ch);
        }
    }

    cout << letters.size();

    return 0;
}