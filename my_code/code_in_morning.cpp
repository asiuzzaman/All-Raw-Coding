#include<bits/stdc++.h>
using namespace std;
int main()
{
   int ar[5]={6,621,21,22,5};
   list<int>lst(ar,ar+5);
   if(lst.empty())
   {
       cout<<"yes";

   }
   else
   cout<<"no"<<endl;
   cout<<lst.front()<<endl;

   cout<<lst.back()<<endl;
   lst.pop_front();
   lst.pop_back();
   cout<<lst.back()<<endl;

}
