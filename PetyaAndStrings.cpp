#include<iostream>
using namespace std;
int main()
{
    string str1;
    cin >> str1;
    string str2;
    cin >> str2;
    int ans=0;
    for (int i = 0; i < str1.size(); i++) {
        if(str1[i]>str2[i]){
            ans=1;
            break;
        
        }
        else if (str1[i]==str2[i])
        {
            ans=0;
        }else{  
            ans=-1;
            break;
        } 
    }
    cout << ans;
    return 0;
}