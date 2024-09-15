#include<iostream>
using namespace std;
int SingleNo(int nums[],int n)              // TC=> O(N)  SC=> O(1)
{
    int x = nums[0];
    for(int i=1;i<n;i++)
    {
        x^=nums[i];
    }
    return x;
}
int main()
{
    int nums[] = {5,5,5,2,4,4,4};
    int n = sizeof(nums)/sizeof(nums[0]);
    cout<<SingleNo(nums,n);
}