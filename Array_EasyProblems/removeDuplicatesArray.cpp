#include<bits/stdc++.h>
using namespace std;
int removeduplicates(vector<int>& nums)
{
    int k=1;
    for(int i=1;i<nums.size();i++)
    {
        if(nums[i]!=nums[i-1])
        {
            nums[k]=nums[i];
            k++;
        }
    }

   return k;
}
int main()
{
     vector<int>nums={0,0,1,1,2,2,3,3};
     
     int k=removeduplicates(nums);
     cout<<"unique Numbers:"<<k<<endl;
     for(int i=0;i<k;i++)
     {
         cout<<" "<<nums[i];
     }
}
