#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,n,w,i,a,b,c=0;
    cin>>k>>n>>w;
    a=(2*k+((w-1)*k));
   b=(w*a)/2;
     if(b>n)
     {
         c=b-n;
         cout<<c;
     }
     else{
        cout<<"0";
     }

}
