    #include<iostream>
    #include<algorithm>
    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {   int t,n,x,result,a=0,b=0;
     
    	cin>>t;
    	for(int i=0;i<t;i++)
    	{
    		cin>>n;
    		
    		int arr1[n];
    		for(int j=0;j<n;j++)
    		{
    			cin>>arr1[j];
    			
    		}
    		cin>>x;
    		int arr2[x];
    		for(int j=0;j<x;j++)
    		{
    			cin>>arr2[j];
    			
    		}
    		sort(arr1,arr1+n);
    		sort(arr2,arr2+x);
    	            result = INT_MAX;
    		while(a<n && b<x)
    		{
    			if(abs(arr1[a]-arr2[b])<result)
    			result= abs(arr1[a]-arr2[b]);
    			
    			if(arr1[a]<arr2[b])
    			a++;
    			else b++;
    		}
    		cout<<result<<endl;
    		a=0;
    		b=0; 
    	}
    } 
