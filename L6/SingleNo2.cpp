#include<iostream>
using namespace std;
// int SingleNo2(int nums[],int n)              // TC=> O(N)*32  SC=> O(1)
// {
//     int count =0;

//     for(int i = 0;i<32;i++)
//     {
//         int x = 0;
//         for(int j=0;j<n;j++)
//         {
//             if(((1<<i)&nums[j]))x++;                  // 
//         }
//         if(x%3!=0)count|=count|(1<<i);                       // 3 ones 
//     }
//     return count;
// }

int SingleNo2(int nums[],int n)                     // TC=> O(Nlog(N))  SC=> O(1)
{
    sort(nums,nums+n);
    for(int i=1;i<n;i+=3)
    {
        if(nums[i]!=nums[i-1])return nums[i-1];
    }
    return nums[n-1];
}
int main()
{
    int nums[] = {4,4,4,1,1,1,2,5,5,5};
    int n = sizeof(nums)/sizeof(nums[0]);
    cout<<SingleNo2(nums,n);

    // MAP  => TC => O(N*log(M))            // N -> No of elements  M -> Size of map  
}