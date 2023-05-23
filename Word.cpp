#include<bits/stdc++.h>

using namespace std;

 int main()
 {
     int i,l=0,u=0;
     string s;
     getline(cin,s);
     for(i=0;s[i]!=0;i++)
     {
         if(s[i]>=97 && s[i]<=122)
         {
             l++;
         }
         else if(s[i]>=65 && s[i]<97)
         {
             u++;
         }

     }
     for(i=0;s[i]!=0;i++)
     {

         if(l>=u)
         {
             if(s[i]<97)
             {
                 s[i]=s[i]+32;
                 cout<<s[i];
             }
             else{
           cout<<s[i];
         }
         }
         else if(u>l)
         {
            if(s[i]>=97 && s[i]<=122)
            {
                s[i]=s[i]-32;
             cout<<s[i];
            }
            else{
           cout<<s[i];
         }
         }

     }
 }
