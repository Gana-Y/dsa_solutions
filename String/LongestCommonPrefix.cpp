#include<bits/stdc++.h>
using namespace std;

string LongestCommonPrefix(vector<string>& strs)
{
    string prefix="";
    for(int i=0;i<strs[0].size();i++)
    {
        char c=strs[0][i];

        for(int j=1;j<strs.size();j++)
        {
            if(i>=strs[j].size() || strs[j][i] !=c )
            {
               return prefix;
            }
        }
        prefix += c;
    }
 
    return "Nothing is Common";

}
int main()
{
     int n;
      cout<<"Enter the size of  String"<<endl;
     cin>>n;
    
    vector<string> names(n);
     cout<<"Enter Names to find Longest Prefix"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>names[i];
    }
    cout <<"Longest Common Prefix is:"<< LongestCommonPrefix(names)<<endl;
}
