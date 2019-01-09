#include<iostream>
using namespace std;
class Greater
{
	int a[10],firstmax,secondmax,n;
	public:
		void greater()
		{
	cout<<"\nENTER THE NO. OF ELEMENTS TO BE INSERT\n";
	cin>>n;
	cout<<"\n ENTER THE ELEMENTS\n";
	for(int i=0;i<n;i++)
	cin>>a[i];
	firstmax=a[0];
	for(int i=1;i<n;i++)
	{
		if (a[i]>firstmax)
		{
			secondmax=firstmax;
			firstmax=a[i];
		}
		else if (a[i]>secondmax)
		secondmax=a[i];
		
	}
	
	cout<<"\nFIRST MAX="<<firstmax;
	cout<<"\nSECOND MAX="<<secondmax;

   }
};
main()
{
	Greater ob;
	ob.greater();
	}
