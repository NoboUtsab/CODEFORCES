#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t,rt;
    cin>>s>>t;
   rt=t;
   reverse(rt.begin(),rt.end());
   if(s==rt)
   {
       cout<<"YES"<<endl;
   }
   else
   {
       cout<<"NO"<<endl;
   }

}
