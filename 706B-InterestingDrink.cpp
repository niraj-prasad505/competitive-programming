#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n= 0;
    cin >> n;
    vector<int> shops(n);

    for (int i = 0; i < n; i++) {
        cin >> shops[i];
    }

    sort(shops.begin(), shops.end());

    int q=0;
    cin >> q;

    for (int i = 0; i < q; i++) {
        long long coin=0;
        cin >> coin;
        int ans = upper_bound(shops.begin(), shops.end(), coin) - shops.begin();
        cout << ans;
       
    }
    
    return 0;
}