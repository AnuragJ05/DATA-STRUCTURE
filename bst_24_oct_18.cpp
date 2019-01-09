#include<bits/stdc++.h>
using namespace std;
struct node
{
	node *left;
	int data;
	node* right;
}*ptr=NULL,*ptr1=NULL,*temp=NULL,*newnode,*root=NULL;

class Bst
{
public:
	
void getnode()
{
	newnode= new node;
	cout<<"\nEnter element : ";
	cin>>newnode->data;
	newnode->right=NULL;
	newnode->left=NULL;
}
void iemptylist()
	{
		getnode();
		root=newnode;
	}
void bst()

	{
		ptr=root;
		int flag=false;
	//	cout<<" "<<ptr;
		while( ptr!=NULL)
		{
		//	cout<<" "<<ptr;
			
			if((newnode->data ) == (ptr->data))
			{
				flag=true;
				break;
			}
			
			else if((newnode->data ) > (ptr->data))
			{  ptr1=ptr;
			
			  ptr=ptr->right; 
	//		  cout<<" "<<ptr1<<" "<<ptr;
			  }
			else
			{
			ptr1=ptr;	 
			ptr=ptr->left;
	//		cout<<" "<<ptr1<<" "<<ptr;
	}
		}
	//	cout<<"\ncheck";
		if((ptr1->data) > (newnode->data) && flag==false)      
	    ptr1->left=newnode;
		else if((ptr1->data) < (newnode->data) && flag==false) 
		{
	//	cout<<"\ncheck";
		ptr1->right=newnode;
}
}

void inorder(struct node *ptr)
{
	if (ptr==NULL) return;

	inorder(ptr->left);
	cout<<ptr->data;
	inorder(ptr->right);

}


};
main()
{
	Bst ob;
	
	int ch=0;
	ob.iemptylist();
	cout<<"\nELEMENTS ARE :";
	ob.inorder(root);

	do{	
	ob.getnode();	
	ob.bst();
	cout<<"\nELEMENTS ARE :";
	ob.inorder(root);

		cout<<"\n1 to continue";
		cin>>ch;
	}while(ch==1);
	cout<<"\nELEMENTS ARE :";
	ob.inorder(root);
}
