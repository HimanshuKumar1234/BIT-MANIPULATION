#include<iostream>
using namespace std;
int SetBit(int n, int i)
{
    return (n|(1<<i));
}
int main()
{
    int n;
    cout<<"Enter No :- ";
    cin>>n;
    int i;
    cout<<"Enter ith No :- ";
    cin>>i;
    cout<<SetBit(n,i);
}