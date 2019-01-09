#include<iostream>
using namespace std;
#define max 20
class Lqueue
{
	public:
	int a[max],item,f,r;
	
	Lqueue()
	{
	f=r;
	}
void enqueue()
{
	if(r==max) cout<<"\nOVERFLOW";
	else 
	{
		cout<<"\nENTER THE ITEM :";
		cin>>item;
	a[r++]=item;	
	}
}
void dequeue()
{
	if(f==r) cout<<"\nUNDERFLLOW";
	else item=a[f++];
}

void traverse()
{
    cout<<"\nELEMENTS IN LINEAR QUEUQE ARE :\n";
	for(int i=f;i<r;i++)
	cout<<a[i]<<endl;
}


};


main()
{
	int chc;
	char ans;
	Lqueue ob;
	do
	    {
	
	cout<<"\n1.DO YOU TO ADD IN QUEUE \n2.DO YOU WANT TO DELETE IN QUEUE \n3.DO YOU WANT TO SEE YOUR STACK \n\nEnter your Choice\n"; 
	cin>>chc;
		
switch(chc)
	{
	case 1:
		ob.enqueue();
	break;
	case 2:ob.dequeue();
	break;
	case 3:ob.traverse();
	break;
    default: cout<<"\n wrong choice";
	}

	cout<<"\n\n do u want more press y or Y"<<endl;
	cin>>ans;
	cout<<endl<<endl<<endl;
	}while(ans=='y'|| ans=='Y');
	cout<<"\n ***************************************************THANK YOU*********************************************************";
	}
