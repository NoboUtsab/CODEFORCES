#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,m,i,n;
    cin>>t;
    while(t--)
    {
        long long count=0;
        cin>>m;

            i=m;
            while(m!=0)
            {
               m=m/10;
               count ++;
            }
            //count=count-1;
            n=pow(10,count-1);
           // cout<<m<<endl;
           long long j=i-n;
            cout<<j<<endl;

    }
}
