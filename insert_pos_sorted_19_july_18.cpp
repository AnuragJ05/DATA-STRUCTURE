# include <iostream>
using namespace std;
# define max 20
class Insertpos
{
	int n,item,pos=0,A[max];
	
	public:
		void insertpos ()
		{
			cout<<"\nENTER THE NO. OF ELEMENT YOU WANT TO ENTER: ";
			cin>>n;
			if (n==max) cout<<"\nOVERFLOW";
			else
			{
			
			cout<<"\nENTER THE ELEMENTS IN ASSENDING ORDER: ";
			for(int i=0;i<=n-1;i++)
			{
				cin>>A[i];
			}
			cout<<"\nENTER THE ITEM: ";
			cin>>item;
			
			for(int j=n-1;j>=0;j--)
			{
				if(item<=A[j])
				{
				
				A[j+1]=A[j];
				A[j]=item;
			}
			else if(item>A[n-1]) { A[n]=item; break;
			}
			else break;
			}
			n++;
		}

            cout<<"\nTHE ELEMENTS AFTER INSERTION ARE: ";
			for(int i=0;i<n;i++)
			{
				cout<<A[i];
				
			}
		}
};
main(){
	Insertpos ob;
	ob.insertpos();
}
