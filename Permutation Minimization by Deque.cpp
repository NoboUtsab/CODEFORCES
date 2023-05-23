#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<long long>q;
    long long t,n,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        q.push(a[0]);
                long long min=a[0];
        long long j=0;
        for(int i=0;i<n;i++)
        {
            if(min>a[i] && a[i]<a[i+1])
            {
                x=q.front();
                q.pop();
                q.push(a[i]);
                q.push(x);
            }

        }
        for(int i=0;i<q.size();i++)
        {
            cout<<q.front()<<" ";
        }
    }
}
