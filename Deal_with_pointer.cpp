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
    
    const int SIZE=5;
    int *pArray;
    pArray=new int[SIZE];// Allocate array via new[] operator.
    
    for (int i = 0; i < SIZE; ++i)
    {
    	*(pArray+i)=rand()%100;
    }

    for (int i = 0; i < SIZE; ++i)
    {
    	cout<<*(pArray+i)<<" ";
    }
    cout<<endl;
    delete[] pArray;
    

   
}