#include<bits/stdc++.h>
using namespace std;

string LargestOddNumber(string num)
{
     for(int i=num.size()-1;i>=0;i--)
     {
         if(num[i]%2!=0)
         {
             return num.substr(0,i+1);
         }
     }
        
     return "";
    }

int main()
{
    string number;
    cout<<"Enter the Number"<<endl;
    cin>>number;

    string result=LargestOddNumber(number);
    cout<<"Largest Odd number: "<<result<<endl;
}