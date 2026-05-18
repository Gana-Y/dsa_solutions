 #include<bits/stdc++.h>
 using namespace std;

 bool isAnagram(string s,string t)
 {
      if(s.size()!=t.size())
      return false;


      unordered_map<char,int>map1;
      unordered_map<char,int>map2;

      for(char c: s)
         map1[c]++;

    for(char c:t)
       map2[c]++;


    return map1==map2;
 }
 int main()
 {
     string name,name2;
     cout<<"Enter name1 and name2"<<endl;
     cin>>name>>name2;

      if(isAnagram(name,name2))
      {
         cout<<"both Strings are Anagram"<<endl;
      }
      else{
        cout<<"both strings are not anagram"<<endl;
      }
 }