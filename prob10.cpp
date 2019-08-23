#include<iostream>
#include<math.h>
using namespace std;
int main()
{
 unsigned long long int i,j, t=0,sum=0;
 int flag=0;
 i=5;
 while(i<2000000)
 {
  t=(int)sqrt(i);
  for(j=3;j<=t;j=j+2)//as we are skipping the even numbers so j=3
   {
    if(i%j==0)
     {
      flag=1;break;
     }
   }
   if(!flag)
   {
    sum+=i;
   }
  flag=0;i+=2;//Skipping the even numbers
 }
 sum+=5;
 cout<<"The sum of Prime numbers are="<<sum;
 return 0;
}




