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
    int A[n];
    for (int i = 0; i < n; ++i)
    {
    	cin>>A[i];
    }
    int pivot=A[0];

    std::vector<int> left,right;
    for (int i = 1; i < n; ++i)
    {
    	if(pivot>A[i])
    		left.push_back(A[i]);
    	else 
    		right.push_back(A[i]);

    }
    for(int i=0;i<left.size();i++)
    {
    	cout<<left[i]<<" ";
    }
    cout<<pivot<<" ";
    for (int i = 0; i < right.size(); ++i)
    {
    	std::cout<<right[i]<<" ";
    }
    cout<<endl;

   
}