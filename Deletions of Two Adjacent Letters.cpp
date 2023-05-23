#include<bits/stdc++.h>
using namespace std;
int main()

{

int t,i,c=0;
    string s,m;
    cin>>t;

    while(t--)
    {
        cin>>s>>m;
        cin.ignore();
        if(s.size()%2!=0)
        {
            for(i=0;s[i]!=0;i=i+2)
            {
                if(s[i]==m[i])
                {
                   c=1;
                }
                else
                {
                    c=0;
                }
            }
            if(c==1)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
             cout<<"NO"<<endl;
        }
    }

}
