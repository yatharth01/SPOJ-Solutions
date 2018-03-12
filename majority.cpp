#include<iostream>
using namespace std;
int main()
{
	long long i,j,t,n,k,c,x;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n;
		int arr[n];
		for(j=0;j<n;j++)
		{
			cin>>arr[j];
		}
		for(j=0;j<n;j++)
		{   c=0;
	
			for(k=0;k<n;k++)
			{
				if(arr[j]==arr[k])
				{
				c++;
			}
			if(c>(n/2))
			{x=arr[j];
			break;
			}
			
		}
		if(c>(n/2))
		break;
		
	}
	if(c>(n/2))
	cout<<"YES "<<x<<endl;
	else cout<<"NO"<<endl;
}
}
