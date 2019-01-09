#include<iostream>
using namespace std;
#define max 60
class Sorting
{
	public:
	int n,a[max];
		void getdata()
{
	cout<<"enter the number of element";
	cin>>n;
	cout<<"\nenter the element";
	for(int i=0;i<n;i++)
	cin>>a[i];
}
void traverse()
{
    cout<<"\nthe elements are\n";
	for(int i=0;i<n;i++)
	cout<<a[i]<<endl;
}


		void bubble()
		{
			
			int temp;
			
			 for(int i=0;i<=n-2;i++)
			 {	
			 	for(int j=0;j<=n-i-2;j++)
			 	{	
			 		if(a[j]>a[j+1]) 
					 
					 { 
						
			 			temp=a[j];
			 			a[j]=a[j+1];
			 			a[j+1]=temp;
				}
				 }
			 }
			 traverse();
		}
		void smartbubble()
		{
			
			int temp,s;
			
			 for(int i=0;i<=n-2;i++)
			 {
			 	for(int j=0;j<=n-i-2;j++)
			 	{
			 		if(a[j]>a[j+1]) 
			 		{
			 			temp=a[j];
			 			a[j]=a[j+1];
			 			a[j+1]=temp;
			 			s=1;
					 
					 }
				 }
				 if (s==0) break;
			 }
			 traverse();
		}
		void selectionsort()
		{
			
			int spos,temp;
			
			 for(int i=0;i<=n-2;i++)
			 {
			 	spos=i;
			 	for(int j=i+1;j<=n-1;j++)
			 	{
			 		if(a[spos]>a[j]) spos=j;
			 	}
			 	if (i!=spos)
			 		{
			 			temp=a[i];
			 			a[i]=a[spos];
			 			a[spos]=temp;
			 			
					 
					 }
				 
				 
			 }
			 traverse();
		}
		
		void insertionsort()
		{
			int temp,i;
			for(int j=1;j<=n-1;j++){
				
				temp=a[j];
				i=j-1;
			
			while(temp< a[i] && i>=0)
			{
				a[i+1]=a[i];
				--i;
			}
			a[i+1]=temp;
		}
		traverse();
	}
	
	int partition(int f,int l)
	{
		int pivot,i,temp;
		pivot =a[l];
		i=f-1;
		for(int j=f;j<=l-1;j++)
		{
			if(pivot>=a[j])
			{ i=i+1;
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		i=i+1;
			temp=a[i];
				a[i]=a[l];
				a[l]=temp;

			return i;
		}
		
	
void quicksort(int f,int l)
{
	int pos;

	if(f<l)
	{
		pos=partition(f,l);
		quicksort(f,pos-1);
		quicksort(pos+1,l);
	}

}
void merge(int f,int m,int l)
{
	int i,j;
	int n1=m-f+1;
	int n2=l-m;
	int L[n1+1],R[n2+1];
	for(i=0;i<n1;i++)	L[i]=a[f+i];
	
L[i]=100000;	
	for(i=0;i<n2;i++)	R[i]=a[m+1+i];
	
R[i]=100000;	
i=0,j=0;
	for(int k=f;k<=l;k++)
	{ 	if(L[i]<R[j])
	{
		a[k]=L[i]; i++;
	}
	else {
		a[k]=R[j];	j++;
	}
		}	
		traverse();
}
void mergesort(int f,int l)
{
	int mid;
	if(f < l)
	{
		mid = (f + l) / 2;
		mergesort(f, mid);
		mergesort( mid + 1, l);
		merge(f, mid, l);
	}
}

void shellsort()
{
	int gap=n/2,i,j,temp;
	while(gap>0)
	{
		for (i=gap;i<n;i++)
		{
			j=i; 
			temp=a[j];
			while(a[j-gap]>temp && j>=gap)
			{
				a[j]=a[j-gap];
				j=j-gap;
			}
			a[j]=temp;
		}
		gap=gap/2;
	}
		traverse();
}
int maximum()
{
	int large=a[0];
	for (int i=1;i<n;i++)
	{
		if(large<a[i]) large=a[i];
	}
	return large;
}
void countsort()
{

	int k=maximum();
	int count[k+1],output[n];
	for(int i=0;i<k+1;i++) count[i]=0;
	for(int i=0;i<n;i++) output[i]=0;
	
	for(int i=0;i<n;i++) count[a[i]]++;
	for(int i=1;i<k+1;i++) count[i]=count[i]+count[i-1];
	
	for(int i=n-1;i>=0;i--) output[--count[a[i]]]=a[i];
		for(int i=0;i<n;i++) a[i]=output[i];
	traverse();
}
void radixsort()
{
	int maxi=maximum();
	int exp=1;
	while(exp>0 && exp<maxi)
	{
		countingsort(exp);
		exp*=10;
	}
	traverse();
}
void countingsort(int digit)
{
	int count[10],output[n],x;
	for(int i=0;i<10;i++) count[i]=0;
	for(int i=0;i<n;i++) output[i]=0;
	
	for(int i=0;i<n;i++)
	{
		x=(a[i]/digit)%10;
		count[x]++;
	 } 
	for(int i=1;i<10;i++) count[i]=count[i]+count[i-1];
	
	for(int i=n-1;i>=0;i--)
	{
		x=(a[i]/digit)%10;
	  output[--count[x]]=a[i];
}
		for(int i=0;i<n;i++) a[i]=output[i];
}

};


main()
{
	int chc,f,l,p,m;
	char ans;
	Sorting ob;
	cout<<"************************************************WELCOME TO THE WORLD OF SORTING****************************************"<<endl<<endl;
	
		do
	    {
	ob.getdata();
	ob.traverse();
	    	
			cout<<"\n\n1.BUBBLE SORT\n2.SMART BUBBLE SORT\n3.SELECTION SORT\n4. INSERTION SORT\n5.QUICK SORT\n6.MERGE SORT\n7.SHELL SORT\n8.COUNTSORT\n9.RADIX SORT	 \n\nEnter your Choice\n"; cin>>chc;
		
switch(chc)
	{
	case 1:ob.bubble();
	break;
	case 2:ob.smartbubble();
	break;
	case 3:ob.selectionsort();
	break;
	case 4:ob.insertionsort();
	break;
	case 5:
		 p=ob.n;
	ob.quicksort(0,p-1);
	ob.traverse();	
	break;
	case 6:
		p=ob.n;  
	ob.mergesort(0,p-1);
	break;
	case 7:ob.shellsort();
	break;
	case 8:ob.countsort();
	break;
	case 9:ob.radixsort();
	break;
	default: cout<<"\n wrong choice";
	break;
	}

	cout<<"\n\n do u want more press y or Y"<<endl;
	cin>>ans;
	cout<<endl<<endl<<endl;
	}while(ans=='y'|| ans=='Y');
	cout<<"\n ***************************************************THANK YOU*********************************************************";
	}
