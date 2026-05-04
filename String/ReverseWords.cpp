#include<bits/stdc++.h>
using namespace std;

string ReverseString(string s)
{  //step 1 Remove extra spaces
   //stringstream->ignore spaces and count characters.
     string word;
     string cleaned="";
     stringstream ss(s);

      while(ss>>word)
      {
          if(cleaned!="") cleaned+=" ";

          cleaned+=word;
      }

      s=cleaned;
    //Step 2 Reverse String
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