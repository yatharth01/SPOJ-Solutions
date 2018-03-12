    #include<iostream>
    #include<boost/multiprecision/cpp_int.hpp>
    using namespace std;
    using boost::multiprecision::cpp_int;
    int main()
    {   int p;
    cin>>p;
    cpp_int n,k,m,count;
    	for(int j=0;j<p;j++)
    	{         count = 0;
    		cin>>n>>k>>m;
    		while(true)
    		{
    			n = n*k;
    			count++;
    			
    			if(n>m)
    			{
    				count--;
    				break;
    			}
    			if(n==m)
    			break;
    			
    			
    		}
    		cout<<count<<endl;
    	}
    } 
