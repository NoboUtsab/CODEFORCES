#include<bits/stdc++.h>
using namespace std;
#define  ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    char a;
    cin>>s;

    string m="hello";
    ll i,j=0,p=0;

    for(i=0;s[i]!=0;i++)
    {
        if(m[j]==s[i])
        {
            j++;
            p++;

        }

       if(p==5)
        {
            break;
        }
    }

  if(p==5)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}
