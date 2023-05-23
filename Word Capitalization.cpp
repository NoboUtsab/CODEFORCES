#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int i;
    cin>>s;
    for(i=0;s[i]!=0;i++)
    {
            if(s[0]>=97 && s[0]<=125)
    {
        s[0]=s[0]-32;
        cout<<s[0];
    }
    else
    {
        cout<<s[i];
    }
    }

}

