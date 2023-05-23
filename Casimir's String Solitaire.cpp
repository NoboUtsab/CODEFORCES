
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p=0,q=0,r=0;
    string s;
    cin>>n;
    for(int i=0; i<n; i++)
    {
       p=0,q=0,r=0;
        cin>>s;
        for(int j=0; j<s.size(); j++)
        {
            if(s[j]=='A')
                p++;
            if(s[j]=='B')
                q++;
            if(s[j]=='C')
                r++;
        }
        if(q==p+r)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
