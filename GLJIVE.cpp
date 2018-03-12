    #include<iostream>
    using namespace std;
    int main(){
    	int a,b,c,sum=0;
    	int arr[10];
    	for(int i=0;i<10;i++)
    	{
    		cin>>arr[i];
    		
    	}
    	for(int i=0; i<10 ;i++)
    	{   c=arr[i];
    		sum=sum+ c;
    		if(sum>100)
    		break;
    	}
    	
    	if(sum-100 <= 100-sum+c )
    	cout<<sum<<endl;
    	else cout<<sum-c<<endl;
    } 

