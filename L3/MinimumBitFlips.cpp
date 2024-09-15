#include<iostream>
using namespace std;
int SetBits(int n)
{
    int count = 0;
    while(n!=0)
    {
        count++;
        n&=(n-1);
    }
    return count;
}

int MinFlips(int a, int b)
{
    return SetBits(a^b);
}
int main()
{
    int start ;
    int goal ;
    cout<<"Enter Start and Goal :- ";
    cin>>start>>goal;
    cout<<MinFlips(start,goal);
}