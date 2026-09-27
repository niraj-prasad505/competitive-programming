#include<iostream>
using namespace std;
int main()
{
    int x=4421;
    int y=x;
    long ans=0;
    int digit=0;
    int pro=1;
    int sum =0;
    while(y>0){
        digit= y%10;
        // cout << "digit->"<< digit<<"\n";
        pro=pro*digit;
        // cout << "product"<< pro<<"\n";
        sum=sum+digit;
        y = y/10;

    }
    cout <<"pro->"<< pro <<"sum->" << sum<< "\n";
    cout<< "ans="<< pro-sum;
    return 0;
}