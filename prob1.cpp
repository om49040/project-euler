#include<iostream>
using namespace std;
int main()
{
	 long int i,j,sum=0,flag=0;
	for(i=3,j=5;i<1000;i=i+3,j=j+5)
	{   
	    if(j>=1000||flag==1)
	    {j=0;flag=1;
		}
	 	if(i%5==0)
	 	{
	 		sum=sum+j;
	 		continue;
		}
		else
		sum=sum+i+j;
		}
		cout<<sum;
	 }//sum=233168

 
