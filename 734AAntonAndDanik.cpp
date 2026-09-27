#include<iostream>
using namespace std;
int main()
{
    int n;
    string s;
    int Anton=0;
    cin >> n >> s;
    for (int i = 0; i <n; i++)
    {
        if(s[i]=='A')
        {
            Anton++;
        }
    }
    int Danik=n-Anton;
    if(Anton > Danik){
        cout << "Anton";
    }
    else if (Anton<Danik)
    {
        cout << "Danik";
    }
    else
    {
        cout << "Friendship";
    }

    return 0;
}