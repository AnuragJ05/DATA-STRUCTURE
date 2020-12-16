#include<iostream>
#include<algorithm>
using namespace std;
main()
{
	int n,i,count=0;
	cout<<"Enter the number of files : ";
	cin>>n;
	int rec[n],cost[n-1];
	cout<<"Enter the number of records in each file.\n";
	for(i=0;i<n;i++)
	{
		cout<<"File "<<i+1<<" : ";
		cin>>rec[i];
		count+=rec[i];
	}
	i=0;
	sort(rec,rec+n);
	cost[i]=rec[0]+rec[1];
	i++;
	rec[0]=100000;
	rec[1]=100000;
	while(i<n-1)
	{
		sort(rec,rec+n);
		cost[i]=cost[i-1]+rec[0];
		rec[0]=100000;
		i++;
	}
	cout<<"The number of records moved in each step is as follows:\n";
	for(i=0;i<n-1;i++)
    {
    	cout<<"Step "<<i+1<<" : "<<cost[i];
    	cout<<endl;
	}
	cout<<"\nThe merged file now has "<<count<<" records.";
}
