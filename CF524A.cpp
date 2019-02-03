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
    
   int n;
   cin>>n;
   int l,r;
  for (int i = 0; i < n; ++i)
  {
  	cin>>l>>r;

  	int sub=(r-l)+1;
  	
  	if(sub%2==0)
  	{
  		if(r%2==0) cout<<sub/2<<endl;
  		else cout<<(sub/2)*(-1)<<endl;
  	} 
    else
    {
    	if(r%2==0) cout<<((-1)*(sub-1)/2)+r<<endl;
    	else cout<<(-1)*r+((sub-1)/2)<<endl;
    }

  }


   
}