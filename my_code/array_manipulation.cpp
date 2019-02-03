#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
   ll n,m;
   cin>>n>>m;
   ll a,b,k;
   ll ar[123457]={0};
   for(ll i=0;i<m;i++)
   {
       cin>>a>>b>>k;
       for(ll j=a-1;j<=b-1;j++)
       {
           ar[j]+=k;
       }
   }

 sort(ar,ar+n,greater<ll>());
  cout<<ar[0]<<endl;



}
