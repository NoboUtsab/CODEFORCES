#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,a,b,c,d,i;
    cin>>N;
    for(;;)
    {


        N++;

        a=(N/1000);

        b=(N/100)%10;

        c=(N/10)%10;

        d=N%10;

        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
        {

            break;
        }





    }
    cout<<N<<endl;


}
