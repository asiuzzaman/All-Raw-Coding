#include<bits/stdc++.h>
using namespace std;

#define read() freopen("input.txt", "r", stdin);
#define write() freopen("output.txt", "w", stdout);
#define ll long long int 

#define mx 100
int A[mx];

int top=-1;

void push(int x)
{    
    if(top==mx-1) {cout<<"OVERFLOW Condition"<<endl; return;}
	A[++top]=x;
}

void pop()
{
	if(top==-1) {cout<<"No element to POP:"<<endl; return;}
	top--;
}
void show()
{
	for(int i=0;i<=top;i++)
	{
		cout<<A[i]<<" ";
	}
	cout<<endl8l;
}

bool IsEmpty()
{
	if(top==-1) return 1;
	else return 0;
}
int Top()
{
	return A[top];
}

int main()
{
	#ifdef asiuzzaman
	read(); write();
	#endif
    push(6); show();
    push(88); show();
    push(11); show();
    pop();
    cout<<Top()<<endl;
    cout<<IsEmpty()<<endl;

   
}