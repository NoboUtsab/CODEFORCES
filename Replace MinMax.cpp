#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N,a[100000],i,mi,ma,p,q;
    cin>>N;
    for(i=0;i<N;i++)
    {
        cin>>a[i];
    }
    mi=a[0];
    for(i=0;i<N;i++)  //Finding the minimum
    {
        if(mi>a[i])
        {
            mi=a[i];
        }

    }

    for(i=0;i<N;i++) //Finding the position
    {
        if(a[i]==mi)
        {
          p=i;
        }

    }

    ma=a[0];
    for(i=0;i<N;i++)  //Finding the minimum
    {
        if(ma<a[i])
        {
            ma=a[i];

        }

    }

    for(i=0;i<N;i++) //Finding the position
    {
        if(a[i]==ma)
        {
          q=i;
        }

    }

    swap(a[p],a[q]);
    for(i=0;i<N;i++)
    {
        cout<<a[i]<<" ";
    }

}
