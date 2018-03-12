    #include<iostream>
    #include<iomanip>
    #include<math.h>
    using namespace std;
    int main(){
    	int t,i;
    	double a,b,c,d,s,k;
    	cin>>t;
    	for(i=0;i<t;i++)
    	{
    		cin>>a>>b>>c>>d;
    		s=(a+b+c+d)/2.0;
    		k=sqrt((s-a)*(s-b)*(s-c)*(s-d));
    		printf("%0.2f\n",k);
    	}
    	
    } 
