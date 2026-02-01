#include<bits/stdc++.h>
using namespace std;

vector<int> unionarray(vector<int>&a ,vector<int>&b)
{
    unordered_set<int>s;//removes duplicates 

    for(int x:a)
    {
        s.insert(x);
    }
    for(int x:b)
    {
        s.insert(x);
    }

    //converting set into vector.

    vector<int>res(s.begin(),s.end());

    //sorting the vector

    sort(res.begin(),res.end());


  return res;


}


int main()
{

    vector<int>a={1,1,2,2,3,4};
    vector<int>b={2,2,3,4,5,6};

    vector<int> result=unionarray(a,b);

    for(int x:result)
    {
        cout<<x<<" ";
    }


}