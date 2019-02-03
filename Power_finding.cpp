#include<bits/stdc++.h>
using namespace std;
#define read() freopen("input.txt", "r", stdin);
#define write() freopen("output.txt", "w", stdout);
#define ll long long int 

int Cal(int base,int power)
{
	if (power==0) return 1;
	else if(power%2==0) {
	int	y=Cal(base,power/2);

		return y*y;
	}
	else 
		return base*Cal(base,power-1);
}

int main()
{
	#ifdef asiuzzaman
	read(); write();
	#endif
    
    int base,power;
    cin>>base>>power;

    cout<<Cal(base,power)<<endl;


   
}