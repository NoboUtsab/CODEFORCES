#include<bits/stdc++.h>
 using namespace std;
 int main()
 {
     int n,i,count=0;
     cin>>n;
     char c[100];
     for(i=0;i<n;i++)
     {
         cin>>c[i];
     }
     for(i=0;i<n;i++)
     {
         if(c[i]==c[i+1])
         {
             count++;
         }

     }
     cout<<count;
 }
