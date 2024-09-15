#include<iostream>
#include<vector>
using namespace std;
int XOR_Till_N(int N)
{
    if(N%4==1)return 1;
    else if(N%4==2)return N+1;
    else if(N%4==3)return 0;
    else return N;
}
int main()
{
    int N;
    cout<<"Enter N :- ";
    cin>>N;
    cout<<XOR_Till_N(N);            // O(1) O(1)
}