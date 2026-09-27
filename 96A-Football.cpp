#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int n = s.size();
    int count = 1;

    for (int i = 0; i < n - 1; i++)
    {
        int current = s[i];

        while (i + 1 < n && s[i + 1] == current)
        {
            count++;
            i++;
        }

        if (count >= 7)
        {
            cout << "YES";
            return 0;
        }

        count = 1;
    }

    cout << "NO";

    return 0;
}