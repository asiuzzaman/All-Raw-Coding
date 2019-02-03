#include<bits/stdc++.h>
using namespace std;
#define read() freopen("input.txt", "r", stdin);
#define write() freopen("output.txt", "w", stdout);
#define ll long long int 

 struct Node
 {
 	int roll;
 	Node *nxt;
 	
 };
    Node *root=NULL;
    
 void append(int roll)
 {
 	if(root==NULL)
 	{
 		root=new Node();
 		root->roll=roll;
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
 	  newnode->roll=roll;
 	  newnode->nxt=NULL;
 	  current_node->nxt=newnode;  //Link the last node;

 	}



 }

void print()
{
	Node *current_node=root;
	while(current_node!=NULL) {
		printf("%d ",current_node->roll );
		current_node=current_node->nxt;
	    /* code */
	}
}

void delete_node(int roll)
{
	Node *current_node=root;
	Node *previous_node=NULL; 
	while(current_node->roll!=roll)    //Searching Node
	{
		previous_node=current_node;   // Save the previous node;
	    current_node=current_node->nxt;
	}

	if(current_node==root)
	{
		Node *temp=root;
		root=root->nxt; // move root forward
		delete(temp);  // Free memory. 
	}
	else  // delete the non-root node. 
	{
		previous_node->nxt=current_node->nxt;
		delete(current_node);    // free current node.
  
	}
}

int main()
{
	#ifdef asiuzzaman
	read(); write();
	#endif

	append(5);
	append(8);
	//append(66);
	append(88);
	append(55);
	delete_node(5);
	print();

    
    

   
}