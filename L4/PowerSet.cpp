#include<iostream>
#include<vector>
using namespace std;
void Subsets(int arr[],int n,vector<vector<int> >&ans)
{
    int s = 1<<n;
    for(int i=0;i<s;i++)
    {
        vector<int>list;
        for(int j=0;j<n;j++)
        {
            if((i&(1<<j))!=0)list.push_back(arr[j]);
        }
        ans.push_back(list);
    }
}
int main()
{
    int arr []={1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<vector<int> >ans;
    Subsets(arr,n,ans);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}

// TC => O(n*2^n)
// SC => 2^n*n