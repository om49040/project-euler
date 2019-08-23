#include<math.h>
#include<iostream>
using namespace std;
int main()
{
 int flag=0,j,i;
 long long int n=600851475143;
 int h=(int)sqrt(n),t;
 for( i=h;i>=3;--i)
 { 
  if(n%i==0)
  {
  	 j=3;t=(int)sqrt(i);flag=0;
  	 while(j<t)
  	 {
  	 	 if(i%j==0)
  	 	{
  	 	 	flag=1;break;
		}
		j=j+2;
	 }
	 if(flag==1)
	 continue;
	 else
	 break;
	  
  }
 }
 cout<<"The largest prime number is:"<<i;
 return 0;
}
  
