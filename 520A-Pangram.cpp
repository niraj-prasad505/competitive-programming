#include<iostream>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    string str;
    cin >> str;
    bool chBig;
    if(int(str[0]>65)){
        chBig=true;
    }

    for (int i = 0; i < n; i++) {
        if(chBig)
        {
            if(int(str[i])<65)
            {  
                cout << "NO";
            }
        }
        if(!chBig)
        {
            if(int(str[i])>65)
            {  
                cout << "NO";
            }
        }
    }
    cout << "YES";
    return 0;
}