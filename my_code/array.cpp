#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int N,K,p,q,sum,i,j,max=0,x=0;

    cin>>N>>K;
   // long int *a=new long int[N+1]();
   vector<long int>a(N+1);


    for(i=0; i<K; i++)
    {
        cin>>p>>q>>sum;
        a[p]+=sum;
        if((q+1)<=N) a[q+1]-=sum;
        for(int s=0;s<6;s++)
        {
            cout<<a[s]<<" ";
        }
      // cout<<"arra="<<a[5]<<" ";
    }

    for(i=1; i<=N; i++)
    {
    //    cout<<a[i]<<" ";
        x=x+a[i];
        if(max<x) max=x;


    }

    cout<<max;
    return 0;
}
