#include<iostream>
using namespace std;
class Mul
{
	int a[10][10],b[10][10],c[10][10],n,m,p,q;
	public:
		void mul()
		{
	cout<<"\nENTER THE ROWS AND COLUMN OF MATRIX 1 \n";
	cin>>m>>n;
	cout<<"\nENTER THE ROWS AND COLUMN OF MATRIX 2 \n";
	cin>>p>>q;
	cout<<"\n ENTER THE ELEMENTS OF ARRAY 1\n";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
	cin>>a[i][j];
}
	
	cout<<"\n ENTER THE ELEMENTS OF ARRAY 2\n";
	for(int i=0;i<p;i++)
	{
		for(int j=0;j<q;j++)
	cin>>b[i][j];
}

if (n!=p) cout<<"\nMULTIPLICATION OF MATRIX CAN'T BE POSSIBLE";
else
{ 
	for(int i=0;i<m;++i)
	{
		for (int j=0;j<q;++j)
		{
			c[i][j]=0;
			for(int k=0;k<n;++k)	c[i][j]+=a[i][k]*b[k][j];
		}
	}
	cout<<"\n RESULTANT MATRIX AFTER MULTIPLICATION \n";
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<q;j++)
    {
	cout<<c[i][j]<<"\t";
	}	
	cout<<endl;
}
	
}
}
};
main()
{
	Mul ob;
	ob.mul();
	}
