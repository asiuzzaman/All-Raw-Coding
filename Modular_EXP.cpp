#include<bits/stdc++.h>
using namespace std;
#define read() freopen("input.txt", "r", stdin);
#define write() freopen("output.txt", "w", stdout);
#define ll long long int 

int cnt=0;
int MOD(int base,int power,int mod)
{    
	cout<<cnt++<<endl;
	if(power==0) return 1;
	else if(power%2==0) {

		int y=(MOD(base,power/2,mod))%mod;
		return (y*y)%mod;
	}
	else return (base%mod*MOD(base,power-1,mod))%mod;
}

int main()
{
	#ifdef asiuzzaman
	read(); write();
	#endif
    
    int base,power,mod;
    cin>>base>>power>>mod;

   cout<< MOD(base,power,mod)<<endl;

   
}