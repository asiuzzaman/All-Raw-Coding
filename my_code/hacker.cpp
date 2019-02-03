#include <bits/stdc++.h>
using namespace std;
 
  //int a[]={5,6,8,19,23,33,40,50,55};
  #define ll long long int 
 ll binarySearch(ll high,ll  low,ll key,ll a[])
 {
     while(low<=high)
     {
         ll mid=(low+high)/2;
         if(a[mid]<key)
         {
             low=mid+1;
         }
         else if(a[mid]>key)
         {
             high=mid-1;
         }
         
         else return mid;

     }
  //   return -1;


 }
 int main()
 {

    
     ll key=5;
     ll a[12345];
     ll n;cin>>n;
     for(ll i=0;i<n;i++)
     {
         cin>>a[i];
     }
     ll qn;
     cin>>qn;
     sort(a,a+n);
     for(ll i=0;i<qn;i++)
     {
         ll k;
         cin>>k;
         cout<<binarySearch(n,0,k,a)+1<<endl;
     }
   //  cout<<binarySearch(9,0,key);
 }