#include<bits/stdc++.h>
using namespace std;
#define read() freopen("input.txt", "r", stdin);
#define write() freopen("output.txt", "w", stdout);
#define ll long long int 

struct Node
{
	int data;
	Node *nxt;
};

Node *root=NULL;

void PrintList(Node *n)
 {
    while(n!=NULL)
   {
     printf("%d ",n->data );
     n=n->nxt;
   }

 } 

 void InsertNth(Node *head, int data,int position)
{

	Node *a=new Node();
	a->data=data;

	 if(position==0)
	 {
	 	a->nxt=head;
	 	head=a;
	 }
	 else
	 {
	 	Node *temp=head;
	 	while(position>1) {
	 		position--;
	 		temp=temp->nxt;

	 	    /* code */
	 	}
	 	a->nxt=temp->nxt;
	 	temp->nxt=a;

	 }


  PrintList(head);
	 
 }

 void append(int data)
{   


 	if(root==NULL)
 	{
 		root=new Node();
 		root->data=data;
 		root->nxt=NULL;
 	}

 	else
 	 {

 		Node *current_node=root;  ///Copy the root node;
 		while(current_node->nxt!=NULL)
 		 {
 			current_node=current_node->nxt;
 		    /* code */
       	}
 	  Node *newnode=new Node();
 	  newnode->data=data;
 	  newnode->nxt=NULL;
 	  current_node->nxt=newnode;  //Link the last node;

 	}
 	int Dat,pos;
 	cin>>Dat>>pos;
     InsertNth(root,  Dat, pos);

}


int main()
{
	#ifdef asiuzzaman
	read(); write();
	#endif
    
  int num_data;
  cin>>num_data;
  int arr[1000];

  for (int i = 0; i < num_data; ++i)
     {
     	append(arr[i]);
     }   
 

 }