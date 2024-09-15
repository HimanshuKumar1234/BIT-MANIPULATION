#include<iostream>
using namespace std;
bool checkSet(int n, int i)
{
    //Left
    //return (n&(1<<i));

    // Right 
    return (1&(n>>i));
}
int main()
{
    int n;
    cout<<"Enter No :- ";
    cin>>n;
    int i;
    cout<<"Enter ith No :- ";
    cin>>i;
    cout<<checkSet(n,i);
}