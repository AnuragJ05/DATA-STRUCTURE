#include<iostream>
#define INFINITE 100000
using namespace std;
int main()
{
	
	int n,i,j,k;
	cout<<"Enter The No. Of Vertices:";
	cin>>n;
	int cost[n][n];
	cout<<"Enter Cost:\n";
	for(i=0;i<n;i++)
	{  
		for(j=0;j<n;j++)
	   {
	   	 cin>>cost[i][j];
	   	 if((i!=j)&&(cost[i][j]==0))
	   	    cost[i][j]=INFINITE;
	   }	 
	}
	for(int k=0;k<n;k++)
	{
	   for(i=0;i<n;i++)
	   { 
	    for(j=0;j<n;j++)
	       {
	       	if(cost[i][j]>cost[i][k]+cost[k][j])
	       	  cost[i][j]=cost[i][k]+cost[k][j];
		  }
        }
	}
	cout<<"\nFinal Cost:\n";
	for(i=0;i<n;i++)
	{  
	for(j=0;j<n;j++)
	   {
	   	   if((i!=j)&&cost[i][j]==INFINITE)
	   	     cout<<"INF\t";
	   	   else  
		    cout<<cost[i][j]<<"\t";
	   }	 
	   cout<<endl;
	}
}
