#include<iostream>
using namespace std;
#define max 20
class Stack
{
	public:
	int a[max],item,top;
	
	Stack()
	{
	top=-1;
	}
void push()
{
	if(top==max-1) cout<<"\nOVERFLOW";
	else 
	{
		cout<<"\nENTER THE ITEM :";
		cin>>item;
	a[++top]=item;
	cout<<a[top];	
	}
}
void pop()
{
	if(top==-1) cout<<"\nUNDERFLLOW";
	else int temp=a[top--];
}

void traverse()
{
    cout<<"\nELEMENTS IN STACKS ARE :\n";
	for(int i=top;i>=0;i--)
	cout<<a[i]<<endl;
}


};


main()
{
	int chc;
	char ans;
	Stack ob;
	do
	    {
	
	cout<<"\n1.DO YOU TO PUSH IN STACK \n2.DO YOU WANT TO POP IN STACK \n3.DO YOU WANT TO SEE YOUR STACK \n\nEnter your Choice\n"; 
	cin>>chc;
		
switch(chc)
	{
	case 1:
		ob.push();
	break;
	case 2:ob.pop();
	break;
	case 3:ob.traverse();
	break;
    default: cout<<"\n wrong choice";
	}

	cout<<"\n\n do u want more press y or Y"<<endl;
	cin>>ans;
	cout<<endl;
	}while(ans=='y'|| ans=='Y');
	cout<<"\n ***************************************************THANK YOU*********************************************************";
	}
