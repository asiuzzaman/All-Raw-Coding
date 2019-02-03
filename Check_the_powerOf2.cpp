#include<bits/stdc++.h>
using namespace std;
#define read() freopen("input.txt", "r", stdin);
#define write() freopen("output.txt", "w", stdout);
#define ll long long int 

int main()
{
    #ifdef asiuzzaman
    read(); write();
    #endif
    
    string input;
    cin>>input;
      input+=',';

     // cout<<ss<<endl;
     string result="";
     int comma_count=0;
     for(int i=0;i<input.size();i++)
     {
        if(input[i]==',') comma_count++;
     }
      int i;
      int point=0;
    
    for(int j=0;j<comma_count;j++)
    {

       for( i=point;input[i]!=',';i++)
       {
       result+=input[i];
       }
      point=i+1;

     cout<<result<<endl;
     result="";
   }
}