#include<bits/stdc++.h>
using namespace std;
bool RotateString(string s, string goal)
{
    int m=s.size();
    int n=goal.size();

    if(m!=n)
    {
        return false;
    }

    for(int i=0;i<=s.size();i++)
    {
        rotate(begin(s),begin(s)+1,end(s));

        if(s==goal)
        
            return true;
        
    }
    return false;
}
int main()
{
    string s,goal;
    cout<<"Enter String"<<endl;
    cin>>s;

    cout<<"Enter Goal String"<<endl;
    cin>>goal;


   bool result=RotateString(s,goal);

    if(result)
    {
        cout<<"true";
    }
    else{
        cout<<"false";
    }

}