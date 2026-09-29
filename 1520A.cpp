#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        bool visited[26] = {};
        bool valid = true;
        visited[s[0]-65]=true;   
        for (size_t i = 1; i < n; i++)
        {
            if(visited[s[i]-65] && s[i-1]!=s[i]){
                valid = false;
                break;
            }
            if (s[i - 1] != s[i])
            {
                visited[s[i] - 65] = true;
            }
        }
        
        cout << (valid ? "YES" : "NO") << '\n';
    }
}