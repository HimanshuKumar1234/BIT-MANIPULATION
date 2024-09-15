#include<iostream>
using namespace std;

int ConvertToDec(string s)
{
    int res = 0;
    int n = s.length();
    for(int i=0;i<n;i++)
    {
        res+= (pow(2,(n-i-1))*(s[i]-'0'));
    }
    return res;
}
int main()
{
    string s;
    cout<<"Enter String :- ";
    cin>>s;
    cout<<s.length()<<endl;
    cout<<ConvertToDec(s);
}