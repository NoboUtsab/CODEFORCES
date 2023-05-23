#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int t,i,j,min;
    string l,s;
    cin>>t;
    while(t--)
    {
        int sum=0;
      cin>>l>>s;
      for(i=0;l[i]!=0;i++)
      {
          for(j=0;s[j]!=0;j++)
          {
              if(s[j]==l[i])
              {
                  min=i+1;
                  v.push_back(min);
                  cout<<min<<" ";

              }
          }
      }
      int si=v.size();
      for(i=0;i<si;i++)
      {
          sum+=abs(v[i+1]-v[i]);
      }
      cout<<sum<<endl;


    }
}
