#include<iostream>
using namespace std;
int main()
{
	int a[20],n,x,i,flag=0;
	cout<<"Elements Number: ";
	cin>>n;
	cout<<"\nEnter the elements: \n";

	for(i=0;i<n;++i)
		cin>>a[i];

	cout<<"\nEnter element to search:";
	cin>>x;

	for(i=0;i<n;++i)
	{
		if(a[i]==x)
		{
			flag=1;
			break;
		}
	}

	if(flag)
		cout<<"\nElement is found at position "<<i+1;
	else
		cout<<"\nElement not found";

	return 0;
}
