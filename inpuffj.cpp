#include<bits/stdc++.h>
using namespace std;
#define read() freopen("input.txt", "r", stdin);
#define write() freopen("output.txt", "w", stdout);
#define ll long long int 


ll mat[3002][3005];
int main()
{
	#ifdef asiuzzaman
	read(); write();
	#endif
    
    int num=1;
    
   // memset(mat,0,sizeof(mat));
    for(int i=1;i<=3000;i++)
    {
    	for(int j=1;j<=i;j++)
    	{
    		mat[i][j]=num++;

    	}
    }

    int t;cin>>t;
    while(t--) {
        int x1,x2,x3,y1,y2,y3;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;

        int MNx=min(x1,min(x2,x3));
        int MXx=max(x1,max(x2,x3));
        int MNy=min(y1,min(y3,y2));
        int MXy=max(y1,max(y2,y3));
       
       int s=0;
        for(int i=MNx;i<=MXx;i++)
        {
        	for(int j=MNy;j<=MXy;j++)
        	{
        		s+=mat[i][j];
        	}
        }
        cout<<s<<endl;


    }	

   
}