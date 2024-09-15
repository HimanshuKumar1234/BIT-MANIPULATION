#include<iostream>
#include<vector>
using namespace std;
vector<int>SingleNo3(int nums[],int n)                     // TC=> O(N)
{
    long XORR =0;
    for(int i=0;i<n;i++)
    {
        XORR^=nums[i];
    }

    int right = (XORR&(XORR-1))^(XORR);

    int b1=0;
    int b2=0;
    for(int i=0;i<n;i++)
    {
        if(nums[i]&right)b1^=nums[i];
        else b2^=nums[i];
    }

    vector<int>v;
    v.push_back(b1);
    v.push_back(b2);
    return v;
}
int main()
{
    int nums[] = {4,4,1,1,11,2,2,5,15,5};                 // All Nos same two are different
    int n = sizeof(nums)/sizeof(nums[0]);
    vector<int>v = SingleNo3(nums,n);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}