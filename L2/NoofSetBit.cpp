#include<iostream>
using namespace std;
int SetBits(int n)
{
    int count = 0;
    // while(n!=0)
    // {
    //     count+=(n&1);
    //     n>>=1;
    // }   

    while(n!=0)
    {
        count++;
        n&=(n-1);
    }
    return count;
}
int main()
{
    int n;
    cout<<"Enter No :- ";
    cin>>n;
    cout<<SetBits(n);
}