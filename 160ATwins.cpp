#include<iostream>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int coin[100];
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> coin[i];
        total += coin[i];
    }
    sort(coin, coin + n, greater<int>());
    int myMoney=0;
    int count=0;

    for(int i =0; i< n; i++){
        myMoney += coin[i];
        count++;
        if (myMoney > total - myMoney){
            break;
        }
           
    }
    cout << count;
    return 0;
}