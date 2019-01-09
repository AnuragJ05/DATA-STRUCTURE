#include<iostream>
using namespace std;
struct item
{
	string item_name;
	float cost;
	int no_of_items;
}s[10];
main()
{
	int Tcost[10];
	for(int i=0;i<10;i++)
	{
		cout<<"\nPRODUCT NO. "<<i+1<<endl;
		cout<<"\nENTER NAME OF PRODUCT : "<<endl;
		cin>>s[i].item_name; cout<<endl;
		cout<<"\nENTER COST OF PRODUCT : "<<endl;
		cin>>s[i].cost; cout<<endl;
		cout<<"\nENTER NO. OF PRODUCT : "<<endl;
		cin>>s[i].no_of_items; cout<<endl;
		Tcost[i]=(s[i].cost)*(s[i].no_of_items);
	}
	for(int i=0;i<10;i++)
	{
		cout<<"\nPRODUCT NO. "<<i+1<<endl;
		cout<<"\nCOST OF PRODUCT: "<<s[i].item_name<<" is :"<<Tcost[i]<<endl;
		}
	}
