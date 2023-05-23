#include<bits/stdc++.h>

using namespace std;

int main()

{
    int a[10000],n,k,p,count=0;
     cin>>n>>k;
     for(int i=1;i<=n;i++)
     {
         cin>>a[i];

     }


         for(int i=1;i<=n;i++)
     {
         if(a[k]==0)
         {
             if(a[i]==0)
             {
                 count==0;
             }
             else if(a[i]>a[k])
             {
                 count++;
             }
         }
         else if(a[i]>=a[k])
         {
             count++;
         }

     }

     cout<<count<<endl;
}





