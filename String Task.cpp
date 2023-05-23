#include<bits/stdc++.h>

using namespace std;

 int main()
 {
     string s;
     int i;
     getline(cin,s);
   s.erase(remove(s.begin(),s.end(),'a'),s.end());
   s.erase(remove(s.begin(),s.end(),'A'),s.end());
   s.erase(remove(s.begin(),s.end(),'e'),s.end());
   s.erase(remove(s.begin(),s.end(),'E'),s.end());
   s.erase(remove(s.begin(),s.end(),'i'),s.end());
   s.erase(remove(s.begin(),s.end(),'I'),s.end());
   s.erase(remove(s.begin(),s.end(),'o'),s.end());
   s.erase(remove(s.begin(),s.end(),'O'),s.end());
   s.erase(remove(s.begin(),s.end(),'u'),s.end());
   s.erase(remove(s.begin(),s.end(),'U'),s.end());
   s.erase(remove(s.begin(),s.end(),'y'),s.end());
   s.erase(remove(s.begin(),s.end(),'Y'),s.end());
    for(i=0;s[i]!=0;i++)
    {
        if(s[i]>=65 && s[i]<97)
        {
            s[i]=s[i]+32;
            cout<<"."<<s[i];
        }
        else
        {
            cout<<"."<<s[i];
        }
    }


    }

