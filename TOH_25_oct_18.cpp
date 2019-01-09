#include<iostream>
using namespace std;


class TOH
{ 
  public:
  	int n,from,aux,to;
  	TOH()
  	{
  		n=0;
  		from=1;
  		aux=2;
  		to=3;
	  }
	void toh(int,int,int,int);
};
void TOH::toh(int n,int from,int aux,int to)
{
if (n==1)
{
		cout<<"move disc from "<<from<<"to"<<to<<endl;
	return;
}
toh(n-1,from,to,aux);
cout<<"move disc from"<<from<<"to"<<to<<endl;
toh(n-1,aux,from,to);
}
main()
{ int n;
	cin>>n;
	TOH ob;
	ob.toh(n,1,2,3);
}
