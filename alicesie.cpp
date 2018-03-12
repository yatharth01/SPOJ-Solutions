#include<iostream>
using namespace std;
int main(){
	int t,n,i,j;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n;
		if(n%2==0)
		cout<< n/2 <<endl;
		else cout<< n/2 +1 <<endl;
	}
}
