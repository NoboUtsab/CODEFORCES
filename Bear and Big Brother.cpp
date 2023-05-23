#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c=0;
    cin>>a>>b;
    for(int i=1;a<=b;i++)
    {
        a=a*3;
        b=b*2;
        c++;
    }
    cout<<c;
}
