#include<bits/stdc++.h>
using namespace std;

string ReverseString(string s)
{
    //Step 1 Reverse String
    reverse(s.begin(),s.end());

     int start=0;
     for(int i=0;i<=s.size();i++)
     {
        
        if(i==s.size() || s[i]==' ')
        {
            reverse(s.begin()+start,s.begin()+i);

            start=i+1;
        }
     
    }
    return s;
}

int main()
{
    string name;
    cout<<"Enter name"<<endl;
    getline(cin,name);
    string result=ReverseString(name);
    cout<<result;
}