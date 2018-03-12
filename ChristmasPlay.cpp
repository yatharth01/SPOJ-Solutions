    #include<iostream>
    #include<algorithm>
    using namespace std;
    int main(){
    	 
    	long long t,k,n,temp,min,i,j;
    	cin>>t;
    	for(i=0;i<t;i++)
    	{
    		cin>>n>>k;
    		long long arr[n];
    	   for(j=0;j<n;j++)
    	   cin>>arr[j];
    	   sort(arr,arr+n);
    	   min=arr[k-1]-arr[0];
    	   for(j=0;j<=n-k; )
    	   { 
    	   	 temp=arr[j+k-1]-arr[j];
    	   	 if(temp<=min)
    	   	 min=temp;
    	   	 j++;
    	   }
    	   cout<<min<<endl;
    	   
    	}
    } 
