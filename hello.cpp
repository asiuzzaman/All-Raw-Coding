#include<bits/stdc++.h>
using namespace std;
#define read() freopen("input.txt", "r", stdin);
#define write() freopen("output.txt", "w", stdout);
#define ll long long int 


bool cmp(string s1,string s2)
{
    return s1<s2;
}
int main()
{
	#ifdef asiuzzaman
	read(); write();
	#endif
    
    string s1="aaiu";
    string s2="aaer";

    cout<<cmp(s1,s2);
   
}