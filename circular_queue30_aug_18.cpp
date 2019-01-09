#include<iostream>
using namespace std;
#define max 20
class Cqueue
{
	public:
	int a[max],item,f,r,n;
	
	Cqueue()
	{
	f=r;
	n=0;
	}
void enqueue()
{
	if(n==max) cout<<"\nOVERFLOW";
	else 
	{
		cout<<"\nENTER THE ITEM :";
		cin>>item;
	a[r]=item;	
	r=(r+1)%max;
	n++;
	}
}
void dequeue()
{
	if(n==0) cout<<"\nUNDERFLLOW";
	else{
	item=a[f];
	f=(f+1)%max;
	n--;
}
}


void traverse()
{
	int temp=f;
    cout<<"\nELEMENTS IN CIRCULAR QUEUE ARE :\n";
	for(int i=1;i<=n;i++)
{
		cout<<a[temp]<<endl;
	temp=(temp+1)%max;
}
}


};


main()
{
	int chc;
	char ans;
	Cqueue ob;
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
	cout<<endl;
	}while(ans=='y'|| ans=='Y');
	cout<<"\n ***************************************************THANK YOU*********************************************************";
	}
