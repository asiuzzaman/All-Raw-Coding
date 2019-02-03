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

    int mat[10][10];
    int n=5,m=5;
    for(int i=0;i<n;i++)
    {

        for(int j=0;j<m;j++)
        {

            cin>>mat[i][j];
        }
    }
     cout<<endl;
//     for(int k=0;k<m;k++)
//     {
//         int i=n-1;
//         int j=k;
//         while(j<m)
//         {
//             cout<<mat[i][j]<<" ";
//             j++;
//             i--;
//         }
//
//     }

    for(int k=n-1;k>=0;k--)
    {
    	int i=k;
    	int j=m-1;
    	while(i>=0)
    	{
    		cout<<mat[i][j]<<" ";
    		j--;
    		i-- ;
    	}
    	cout<<endl;
    }
    cout<<endl;
for(int k=0;k<=m-1;k++)
{

    int i=n-1;
    int j=k;
    while( j<m )
    {

        cout<<mat[i][j]<<" ";
        j++;
        i--;
    }
    cout<<endl;
}




}

/*

1   2  3  4  5
6   7  8  9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25


*/
