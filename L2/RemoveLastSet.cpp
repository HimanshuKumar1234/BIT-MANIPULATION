#include<iostream>
using namespace std;
int RemoveLastSetBit(int n)
{
    return (n&(n-1));
}
int main()
{
    int n;
    cout<<"Enter No :- ";
    cin>>n;
    cout<<RemoveLastSetBit(n);
}