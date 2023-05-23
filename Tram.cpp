#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,t,i,a,b,m;
    vector<long long>c;
    vector<long long>d;
    vector<long long>e;
    cin>>n;
   for(i=0;i<n;i++)
    {
        cin>>a>>b;
        c.push_back(a);
        d.push_back(b);
    }
    t=d[0]-c[0];
    e.push_back(t);
    for(i=1;i<n;i++)
    {
        t=(t-c[i])+d[i];
        e.push_back(t);

    }
   m=e[0];
   for(i=1;i<n;i++)
   {
       if(m<e[i])
       {
           m=e[i];
       }
   }
    cout<<m;
}
