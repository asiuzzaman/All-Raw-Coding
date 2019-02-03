#include<bits/stdc++.h>
using namespace std;
#define read() freopen("input.txt", "r", stdin);
#define write() freopen("output.txt", "w", stdout);
#define ll long long int 

struct Node
{
	int data;
	Node *left,*right;
	
};

Node *Insert(Node *root, int data)
{    
    

	if(root==NULL) {
		root=new Node();
        root->data=data;
        root->left=root->right=NULL;

	}
	else if(data<= root->data) root->left=Insert(root->left,data);
	else if(data>root->data) root->right=Insert(root->right,data);

	return root;
}

void LevelOrder(Node *root)
{
	if(root==NULL) return ;
	cout<<root->data<<" ";
	LevelOrder(root->left);
	LevelOrder(root->right);

}


int main()
{
	#ifdef asiuzzaman
	read(); write();
	#endif
    
    int n;
    cin>>n;
    Node *root=NULL;
    for(int i=0;i<n;i++)
    {
    	int key;
    	cin>>key;
    	root=Insert(root,key);
    }
    LevelOrder(root);



   
}