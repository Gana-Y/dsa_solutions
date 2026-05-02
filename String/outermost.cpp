#include <bits/stdc++.h>
using namespace std;
string RemoveoutermostString(string s)
{
   int  count=0;
   string result;
    for(char c:s)
    {
         if(c=='(')
         {
            if(count>0)
              result+=c;
            count++;
         }
         else{
             count--;
             if(count>0)
               result+=c;
         }
    }
    return result;
}
int main()
{
    string name;
    cout << "Enter Parentheses:" << endl;
    cin >> name;

    string output=RemoveoutermostString(name);
    cout<<output;
}