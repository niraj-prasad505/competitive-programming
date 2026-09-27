#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int maxNumber=0;
    int people=0;

    for (int i = 0; i < n; i++) {
        int leaving, entering;
        cin >> leaving >> entering;

        people +=entering;
        people-=leaving;
        maxNumber=max(maxNumber,people);
    }
    cout << maxNumber;
    return 0;
}