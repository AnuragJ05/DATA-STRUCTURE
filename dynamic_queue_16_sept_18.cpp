#include<iostream>
using namespace std;
struct node
{
	int data;
	node *nextnode;
	
}*newnode,*front=NULL,*rear=NULL,*temp;
class DQueue
{ public:
	int n;
	DQueue()
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
	front=newnode;
	rear=newnode;
}

void enqueue()
{
	getnode();
	rear->nextnode=newnode;
	rear=newnode;
	n++;
}
void dequeue()
{
	if(front==rear){
		front=NULL;
		rear=NULL;
	}
	else
	{
		front=front->nextnode;
		n--;
	}
		}

void traverse()
{
	temp=front;
		cout<<endl<<"QUEUE :\n";
			while(temp!=NULL)
		{
			cout<<temp->data<<endl;
			temp=temp->nextnode;
		 } 
}
};
main()
{
		DQueue dq;
	int ch;
	char ans;
	dq.iemptylist();
	do
	{		cout<<"\nwhat do u want :";
		    cout<<"\n1 enqueue";
		    cout<<"\n2 dequeue";
			cout<<"\n3 to see the queue";
			cout<<endl;	
			cin>>ch;		
		switch(ch)
		{
		case 1:dq.enqueue();
		break;
		case 2:dq.dequeue();
		break;
		case 3: dq.traverse();
		break;
		default: cout<<"\n wrong choice";
		break;
		}
	cout<<"\n\n Do u want more..........press y or Y : ";
	cin>>ans;
	}while(ans=='y'|| ans=='Y');
}
