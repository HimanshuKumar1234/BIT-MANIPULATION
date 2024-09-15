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

int XOR_L_TO_R(int L,int R)
{
    int ans = XOR_Till_N(L-1)^XOR_Till_N(R);
    return ans;
}
int main()
{
    int L,R;
    cout<<"Enter Two Nos :- ";
    cin>>L>>R;
    cout<<XOR_L_TO_R(L,R);
}