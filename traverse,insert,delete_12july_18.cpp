#include<iostream>
using namespace std;
#define max 60
class Array
{
	int n,item,pos, a[max];
	public:
		void getdata();
		void traverse();
		void insertatfirst();
		void insertatlast();
		void insertatpos();
		void deleteatfirst();
		void deleteatpos();
		void deleteatlast();
		int isempty();
		int isfull();
};
int Array::isempty()
{
	if(n==0) return -1;	
	else return 1;
}
int Array::isfull()
{
	if(n==max) return -1;	
	else return 1;
}
void Array::getdata()
{
	cout<<"enter the number of element";
	cin>>n;
	cout<<"\nenter the element";
	for(int i=0;i<n;i++)
	cin>>a[i];
}
void Array::traverse()
{
    cout<<"\nthe elements are\n";
	for(int i=0;i<n;i++)
	cout<<a[i]<<endl;
}
void Array::insertatfirst()
{
	cout<<"\n enter the item";cin>>item;
	for(int i=n-1;i>=0;i--)a[i+1]=a[i];
	a[0]=item;
	n++;
	traverse();
}
void Array::insertatlast()
{

	cout<<"\n enter the item";
	cin>>item;
	a[n]=item;
	n++;
	traverse();
}
void Array::insertatpos()
{	
    cout<<"\n enter the pos";
	cin>>pos;
	pos--;
	if(pos>=0 && pos<=n)
		{
		cout<<"\n enter the item";
		cin>>item;
	    for(int i=n-1;i>=pos;i--)a[i+1]=a[i];
	    a[pos]=item;
	    n++;
	    traverse();
        }
    else cout<<"\ninvalid posistion";
}
void Array::deleteatfirst()
{
	for(int i=1;i<n;i++)a[i-1]=a[i];
	n--;
	traverse();
}
void Array::deleteatpos()
{
    cout<<"\nENTER THE POSITION ";	cin>>pos;pos--;
	if(pos>=0 && pos<=n-1)
		{
		 	for(int i=pos+1;i<=n-1;i++)a[i-1]=a[i];
		    n--;
		    traverse();
		}
	else cout<<"invalid pos";
}
void Array::deleteatlast()
{
		n--;traverse();
}
main()
{
	int ch=0,chc;
	char ans;
	Array ob;
	ob.getdata();
	ob.traverse();
	do
	{
		cout<<"\n\n1. Insert\n2.Delete\n\nEnter your Choice\n"; cin>>chc;
		if(chc==1)
		{
			int check2=ob.isfull();
			if (check2==-1) cout<<"\nARRAY IS OverFLOW"; 
			else{
			cout<<"\nwhat do u want";
		    cout<<"\n11 do you want to insert at first";
		    cout<<"\n12 do you want to insert at particular pos";
		    cout<<"\n13 do you want to insert at last";	
			cin>>ch;		
		        }
		}
		else if(chc==2)
		{
			int check1=ob.isempty();
		    if (check1==-1) cout<<"\nARRAY IS UNDERFLOW"; 
		    else
		    {
		    cout<<"\nwhat do u want";
		    cout<<"\n21 do you want to delete at first";
		    cout<<"\n22do you want to delete at particular pos";
		    cout<<"\n23 do you want to delete at last";
		    cin>>ch;	
		    }
	    }
	    else cout<<"\nWRONG CHOICE";
   if(ch!=0)
{
switch(ch)
	{
	case 11:ob.insertatfirst();
	break;
	case 12:ob.insertatpos();
	break;
	case 13:ob.insertatlast();
	break;
	case 21:ob.deleteatfirst();
	break;
	case 22:ob.deleteatpos();
	break;
	case 23:ob.deleteatlast();
	break;
	default: cout<<"\n wrong choice";
	break;
	}
}
	cout<<"\n\n do u want more press y or Y";
	cin>>ans;
	}while(ans=='y'|| ans=='Y');
	cout<<"\n THANK YOU";
}
