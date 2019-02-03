#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    map<int,int>mp;
    map<int,int>::iterator it;
    while(t--)
    {
        int n,mn;cin>>n>>mn;
        for(int k=0;k<n;k++)
        {
            int ct,hp;
            cin>>ct>>hp;
            mp[ct]=hp;
        }
        int s1=0,s2=0;
        vector<int>v;
        for(it=mp.begin();it!=mp.end();it++)
        {

            s1+=it->first;
            s2+=it->second;
          //  if(s1<mn) s2+=it->second;
            cout<<s1<<" "<<s2<<endl;
        }
        //cout<<s2<<endl;
        //cout<<s<<endl;
    }
}
/*
1
3 1000
500 500
200 700
700 400

*/
