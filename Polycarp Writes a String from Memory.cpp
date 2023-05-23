#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
        int i,j = 0;
        map<char,int>m;
        string s;
        cin>>s;
        int count = 1;
        for( i  = 0 ; i < s.size() ; i++){
            if(m[s[i]] == 1 && j == 0 ){
                m.clear();
            }
            if(j == 3){
                count++;
                j = 0;
                //m.clear();
            }
            if(m[s[i]] == 0){
                j++;
                m[s[i]] = 1;
            }
        }
        cout<<count<<endl;
    }
}
