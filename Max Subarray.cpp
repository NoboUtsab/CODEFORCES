
#include<bits/stdc++.h>

using namespace std;



int main()
{
    int i,j,T,N,a[100];
    cin>>T;
    while(T--){
        cin>>N;
        for(i=0;i<N;i++){
            cin>>a[i];
        }
        for(i=0;i<N;i++){
            cout<<a[i]<<" ";
        }

        for (int i=0; i<N; i++)
    {
        int m=a[i];
        for (int j=i+1 ; j<N; j++)
        {
            m=max(m,a[j]);
         cout<<m<<" ";
        }
    }
    cout<<endl;

    }
}
