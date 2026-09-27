#include<iostream>
using namespace std;
int main()
{
    string s, t;
    cin >> s >> t;
    int start=0;
    int end=s.size()-1;
    while (start<end)
    {
        swap(s[start],s[end]);
        start++;
        end--;
    }
    if (s == t){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}