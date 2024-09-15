#include<iostream>
using namespace std;
int toggleSet(int n, int i)
{
    return (n^(1<<i));
}
int main()
{
    int n;
    cout<<"Enter No :- ";
    cin>>n;
    int i;
    cout<<"Enter ith No :- ";
    cin>>i;
    cout<<toggleSet(n,i);
}