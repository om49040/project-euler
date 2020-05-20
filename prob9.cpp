#include<iostream>
//pythagorean triplet
using namespace std;
int main()
{
 for(a=999;a>0;--a)//made it 2 loops and went in reverse order
		  {
		  for(b=999;b>0;--b)
		  {
			  c=1000-a-b;
			  if(c*c==(a*a+b*b))
			  {
				  flag=1;break;
			  }
			 
		  }
		  if(flag==1)
			  break;

	}
		 cout<<(a*b*c);
	return 0;
}//31875000
