#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int x=0,n;
    cin>>n;


   while(n--)
    {
      cin>>s;

    if(s[1]=='+')
    {
        ++x;
    }
    else if(s[1]=='-')
    {
        --x;
    }

    }
    cout<<x;


}

