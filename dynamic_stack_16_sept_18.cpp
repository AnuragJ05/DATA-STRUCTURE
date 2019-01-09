#include<iostream>
using namespace std;
struct node
{
	int data;
	node *nextnode;
	
}*newnode,*top=NULL,*bottom=NULL,*temp;
class DStack
{ public:
	int n;
	DStack()
	{
		n=0;
	}
void getnode()
{
	newnode= new node;
	cout<<"enter element : ";
	cin>>newnode->data;
	newnode->nextnode=NULL;
}
void iemptylist()
{
	getnode();
	top=newnode;
	bottom=newnode;
}

void push()
{
	getnode();
	top->nextnode=newnode;
	top=newnode;
	n++;
}
void pop()
{
		temp=bottom;
	while(temp->nextnode!=top) 
	{
	temp=temp->nextnode;
    }
		
		temp->nextnode=NULL;
		top=temp;
		n--;
	}

void traverse()
{
	temp=bottom;
		cout<<endl<<"STACK :\n";
			while(temp!=NULL)
		{
			cout<<temp->data<<endl;
			temp=temp->nextnode;
		 } 
}
};
main()
{
		DStack ds;
	int ch;
	char ans;
	ds.iemptylist();
	do
	{		cout<<"\nwhat do u want :";
		    cout<<"\n1 push";
		    cout<<"\n2 pop";
			cout<<"\n3 to see the stack";
			cout<<endl;	
			cin>>ch;		
		switch(ch)
		{
		case 1:ds.push();
		break;
		case 2:ds.pop();
		break;
		case 3: ds.traverse();
		break;
		default: cout<<"\n wrong choice";
		break;
		}
	cout<<"\n\n Do u want more..........press y or Y : ";
	cin>>ans;
	}while(ans=='y'|| ans=='Y');
}
