#include<iostream>
#include<math.h>
using namespace std;
int main()
{
 long int i,j,sum=0;
 int cnt=2,t=0,flag=0;
 i=1;
 while(cnt<=2000000)
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
    cnt=cnt+1;sum+=i;
   }
  flag=0;i+=2;//Skipping the even numbers
 }
 cout<<"The sum of Prime numbers are="<<sum;
 return 0;
}

