#include<bits/stdc++.h>
using namespace std;
#define read() freopen("input.txt", "r", stdin);
#define write() freopen("output.txt", "w", stdout);
#define ll long long int 

struct Node 
{
	int data;
	Node *left;
	Node *right;
	
};

Node *Insert(Node *root, int data)
{
	if(root==NULL) 
	{
		root=new Node();
		root->data=data;
		root->left=root->right=NULL;
	}
	else if(data<= root->data)
		root->left=Insert(root->left,data);
	else 
		root->right=Insert(root->right,data);

	return root;
}

Node *Look(Node *ptr,int key)
{
	if(ptr==NULL) return NULL;

	
	if(ptr->data==key) return ptr;
	else if(key< ptr->data) return Look(ptr->left,key);
	else return Look(ptr->right,key);

}

void PreOrder(Node *root)
{
	if(root==NULL) return ;

	cout<<root->data<<std::endl;;
	PreOrder(root->left);
	PreOrder(root->right);
}

int main()
{
	#ifdef asiuzzaman
	read(); write();
	#endif

	Node *root=NULL;
   
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
   	  int data;
   	  cin>>data;
   	  root=Insert(root,data);

   }
   
   int sub;
   //cin>>sub;
  //Node* ptr=Look(root,sub);

  PreOrder(root);
	
    
    

}