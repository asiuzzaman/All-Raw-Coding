#include<bits/stdc++.h>
using namespace std;
int  main()
{

int arr[5]={4,6,83,33,22};

list<int>lst(arr,arr+5);

list<int>::iterator it;

it=find(lst.begin(),lst.end(),83);
cout<<*it<<endl;
lst.erase(it);
for(it=lst.begin();it!=lst.end();it++)
{
    cout<<*it<<" ";
}
}
