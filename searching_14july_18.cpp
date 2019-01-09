#include<iostream>
using namespace std;
#define max 60
class Array
{
	int n,item,pos, a[max];
	public:
		void getdata();
		void traverse();
		void linearsearch();
		void binarysearch();
		void interpolationsearch();
		int isempty();
};
int Array::isempty()
{
	if(n==0) return -1;	
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
void Array::linearsearch()
{
	int pos=0,item;
	cout<<"\nENTER THE ITEM TO BE SEARCH";
	cin>>item;
	for(int i=0;i<n;i++)
	{
		if (item==a[i]){ pos=i+1; break;}
	}
	if(pos!=0) cout<<"\nITEM FOUND AT THE POSITION"<<pos;
	else cout<<"\nITEM NOT FOUND";
}
void Array::binarysearch()
{
	int pos=0,item,low,high,m;
	low=0;high=n-1;
	cout<<"\nENTER THE ITEM TO BE SEARCH";
	cin>>item;
	while(low<=high)
	{  m=(low+high)/2;
	if(a[m]==item) {pos=m+1;break;}
	else if(a[m]>item) high=m-1;
	else low=m+1;
	}
	if(pos!=0) cout<<"\nITEM FOUND AT THE POSITION"<<pos;
	else cout<<"\nITEM NOT FOUND";
}
void Array::interpolationsearch()
{
	int pos=0,item,bottom,top,m;
	bottom=0;top=n-1;
	cout<<"\nENTER THE ITEM TO BE SEARCH";
	cin>>item;
	
	  while (bottom <= top) {
        m = bottom + (top - bottom) * ((item - a[bottom]) / (a[top] - a[bottom]));
        if (item == a[m])
           { pos=m + 1; break;}  
        if (item < a[m])
            top = m - 1;    
        else        
            bottom = m + 1; 
    }     
	if(pos!=0) cout<<"\nITEM FOUND AT THE POSITION"<<pos;
	else cout<<"\nITEM NOT FOUND";
}


main()
{
	int chc;
	char ans;
	Array ob;
	ob.getdata();
	ob.traverse();
		do
	    {
	    		int check1=ob.isempty();
		    if (check1==-1) cout<<"\nARRAY IS UNDERFLOW.........\nELEMENT CAN'T BE SEARCH..!!!"; 
		    else
		    {
			cout<<"\n\n1.LINEAR SEARCH\n2.BINARY SEARCH\n3.INTERPOLATION SEARCH \n\nEnter your Choice\n"; cin>>chc;
		
switch(chc)
	{
	case 1:ob.linearsearch();
	break;
	case 2:ob.binarysearch();
	break;
	case 3:ob.interpolationsearch();
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
