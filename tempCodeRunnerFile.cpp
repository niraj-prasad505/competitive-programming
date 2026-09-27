#include<iostream>
using namespace std;
int main()
{
    int n;
    string s;
    int count=0;
    cout << "enter";
    cin >> n >> s;

    for (int i = 0; i <= n; i++)
    {
        if(s[i]=="A")
        {
            count++;
        }
    }
    if(count > n/2){
        cout << "Anton";
    }
    else
    {
        cout << "Danik";
    }

    return 0;
}