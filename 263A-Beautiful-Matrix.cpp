#include<iostream>
using namespace std;
int main()
{
    int a[5][5];
    int row=0;
    int col=0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> a[i][j];
           
            if(a[i][j]==1)
            {
                row = abs(i - 2);
                col = abs(j - 2);
            }
        }
    }
    cout << row+col;
    return 0;
}