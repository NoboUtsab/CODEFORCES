#include<bits/stdc++.h>
 using namespace std;

 int main()
 {
     int p,v,t,Te,count=0;
     cin>>Te;
     while(Te--)
     {
         cin>>p>>v>>t;
         if(p==1 && v==1 || p==1 && t==1)
         {
             count++;
         }
         else if(v==1 && t==1)
         {
             count++;
         }

     }
     cout<<count;
 }
