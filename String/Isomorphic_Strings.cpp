//Isomporphic_Strings  Dsa solutions
#include<bits/stdc++.h>
using namespace std;
bool Isomorphic(string s, string t)
{
     unordered_map<char,char>s_to_t;
     unordered_map<char,char>t_to_s;

     for(int i=0;i<s.size();i++)
     {
         char sc=s[i];
         char tc=t[i];

        if(s_to_t.count(sc) && s_to_t[sc]!=tc)
           return false;

        if(t_to_s.count(tc) && t_to_s[tc]!=sc)
            return false;


         s_to_t[sc]=tc;
         t_to_s[tc]=sc;
     }
     return true;
}
int main()
{
    string s,t;
    cout<<"Ener  Two String"<<endl;
    cin>>s;
    cin>>t;

    if(Isomorphic(s,t))
    {
        cout<<"Yes both are Isomorphic Strings"<<endl;
    }
    else{
        cout<<"No both are not Isomporphics"<<endl;
    }

}
