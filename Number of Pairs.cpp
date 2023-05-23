
#include<bits/stdc++.h>

using namespace std;
int main()
{

    long long a[100000],n,l,r,i,j,t,sum,count=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>l>>r;
        for(i=0; i<n; i++)
        {
          cin>>a[i];
        }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            sum=a[i]+a[j];
          //  cout<<sum<<endl;
            if(sum>=l && sum<=r)
            {
                count++;
            }
        }
    }
    cout<<count<<endl;
    count=0;

    }
}
