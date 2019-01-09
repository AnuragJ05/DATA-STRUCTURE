# include<iostream>
using namespace std;

class Heap
{
	public:
		int n,a[100],hs;
		Heap()
		{
			cout<<"ENTER SIZE OF ARRAY :\n";
			cin>>n;
			cout<<"\nENTER THE ELEMENT :\n";
			for(int j=0;j<n;j++) cin>>a[j];
			hs=n-1;
		}
		void buildHeap()
		{
			for(int j=n/2-1;j>=0;j--) heapify(j);
		cout<<"\nTHE RESULTANT MAX HEAP IS : ";
		for(int j=0;j<n;j++) cout<<a[j]<<endl;
		}
		void heapify(int i)
		{
			int l,r;
			l=2*i+1;
			r=2*i+2;
			int max=i;
			if(a[max]<a[l] && l<=hs) max=l;
			if(a[max]<a[r] && r<=hs ) max=r;
			if(i!=max)
			{
				int temp=a[max];
				a[max]=a[i];
				a[i]=temp;
				heapify(max);
			}
		}
		
		void hsort()
		{
			buildHeap();
			while(hs>0)
			{
				int temp=a[0];
				a[0]=a[hs];
				a[hs]=temp;
				hs--;
				heapify(0);	
			}
		show();	
		}
		void show()
		{
			cout<<"\nSORTED ARRAY ELEMENTS ARE :\n";
			for(int j=0;j<n;j++) cout<<a[j]<<endl;
		}

};
main()
{
	Heap ob;
	ob.hsort();
}
