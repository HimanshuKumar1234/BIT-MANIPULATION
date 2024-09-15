#include<iostream>
using namespace std;
bool PowerOf2(int n)
{
    while(n!=1)
    {
        if((n&1)==1)return false;
        n>>=1;
    }   
    return true;
}
int main()
{
    int n;
    cout<<"Enter No :- ";
    cin>>n;
    cout<<PowerOf2(n);
}