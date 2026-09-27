#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
    string s = "aagram";
    string t = "nagaram";

    
    if (s.length() != t.length()) {
        cout << "false";
        return 0;
    }

    map<char, int> count;

    for (char c : s) {
        count[c]++;
    }

    for (char c : t) {
        count[c]--;
    }

    for (char c : s) {
        if(count[c]!=0){
            return false;
        }
    }
    return true;
    
}