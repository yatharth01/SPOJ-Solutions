#include<iostream>
using namespace std;
int main(){
	string s;
	int i,j,k,half=0,three=0,quarter=0,pizza=0;
	cin>>k;

	
	for(int i=0;i<k;i++)
	{
		cin>>s;
		if(s[2]==50)
		half++;
		if(s[0]==51 && s[2]==52)
		three++;
		if(s[0]==49 && s[2]==52)
		quarter++;
	}
	if(three==quarter)
	{
	pizza=pizza+three;
    three=0;
    quarter=0;
}
if(quarter>three)
{
	pizza=pizza+three;
	quarter=quarter-three;
	three=0;
}
else
{
	pizza=pizza + quarter;
	three=three-quarter;
	quarter=0;
	
}

if(quarter/2>=half)
{ 
	pizza=pizza + half;
	quarter=quarter - 2* half;
	half=0;
}
else
{  if(quarter==1)
{
	pizza=pizza+1;
	quarter=0;
	half=half-1;
}
else{

	pizza= pizza+ quarter/2;
	quarter= quarter%2;
	half=half- quarter/2;
}

if(half%2==0)
{
	pizza= pizza + half/2;
}
else 
{
		pizza= pizza + half/2 +1;
}
if(quarter%4==0)
pizza= pizza + quarter/4;
else
{
	pizza = pizza + quarter/4 + 1;
	//cout<<pizza+1<<endl;
}
pizza =pizza + three;
	
	
cout<<pizza+1<<endl;
}
}
