#include<iostream>
using namespace std;
struct node
{
	int data;
	node *nextnode;
	
}*newnode,*start=NULL,*end=NULL,*temp;
class LinkedList
{ public:
	int n;
	LinkedList()
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
	start=newnode;
	end=newnode;
}

void insertatfirst()
{
	getnode();
	newnode->nextnode=start;
	start=newnode;
	n++;
}
void insertatpos(int pos)
{
	if(pos>=1 && pos<=n+1)
	{
		getnode();
		temp=start;
		for(int i=1;i<pos-1;i++) temp=temp->nextnode;
		
		newnode->nextnode=temp->nextnode;
		temp->nextnode=newnode;
		n++;
	}
	else 
	if(pos<1 || pos>n+1) cout<<"\nINVALID POS";
}

void insertatlast()
{
	getnode();
	end->nextnode=newnode;
	end=newnode;
	n++;
}
void deleteatfirst()
{
	start=start->nextnode;
	n--;
}
void deleteatlast()
{
	temp=start;
	while(temp->nextnode!=end)
	{
		temp=temp->nextnode;
		}
		temp->nextnode=NULL;
		end=temp;
		n--;
}
void deleteatpos(int pos)
{
	temp=start;
	for(int i=1;i<=pos-2;i++)
	{
		temp=temp->nextnode;
	}
	temp->nextnode=temp->nextnode->nextnode;
	n--;
}
void traverse()
{
	temp=start;
		cout<<endl<<"LIST :\n";
		for(int i=0;i<n+1;i++)
		{
			cout<<temp->data<<endl;
			temp=temp->nextnode;
		 } 
}
};
main()
{
		LinkedList LL;
	int ch,pos;
	char ans;
	LL.iemptylist();
	do
	{		cout<<"\nwhat do u want :";
		    cout<<"\n1 to insert at first";
		    cout<<"\n2 to insert at particular pos";
		    cout<<"\n3 to insert at last";
		    cout<<"\n4 to delete at first";
		    cout<<"\n5 to delete at particular pos";
		    cout<<"\n6 to delete at last";
			cout<<"\n7 to see the list";
			cout<<endl;	
			cin>>ch;		
		switch(ch)
		{
		case 1:LL.insertatfirst();
		break;
		case 2: cout<<"\nENTER THE POSITION WHERE YOU WANT TO INSERT : ";
				cin>>pos;
				LL.insertatpos(pos);
		break;
		case 3:LL.insertatlast();
		break;
		case 4:LL.deleteatfirst();
		break;
		case 5:cout<<"\nENTER THE POSITION WHERE YOU WANT TO DELETE : ";
				cin>>pos;
				LL.deleteatpos(pos);
		break;
		case 6:LL.deleteatlast();
		break;
		case 7: LL.traverse();
		break;
		default: cout<<"\n wrong choice";
		break;
		}
	cout<<"\n\n Do u want more..........press y or Y : ";
	cin>>ans;
	}while(ans=='y'|| ans=='Y');
}
