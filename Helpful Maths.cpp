#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    char c[100];
    cin>>s;
    int j=0;
    for(int i=0; s[i]!=0; i++)
    {
        if(s[i]!='+')
        {
            c[j]=s[i];
            j++;
        }
    }
    sort(c,c+j);
    for(int i=0;i<j;i++)
    {
        if(i==j-1)
        {
            cout<<c[i]<<endl;
        }
        else
        {
            cout<<c[i]<<"+";
        }
    }

}
