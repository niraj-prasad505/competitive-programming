#include<iostream>
using namespace std;
int main()
{
    string s="apple";
    int end= s.size()-1;
    int start= 0;
    while (end>=start)
    {
        swap(s[end],s[start]);
        start++;
        end--;
    }
    cout<< s;
    


    return 0;
}