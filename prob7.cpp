#include<iostream>
#include<math.h>
using namespace std;
int main()
{
 long int i;
 int cnt=2,t=0,flag=0,j;
 i=3;
 while(cnt<10001)
 {
  t=(int)sqrt(i);
  for(j=3;j<=t;++j)//as we are skipping the even numbers so j=3
   {i=i+2;
    if(i%j==0)
     {
      flag=1;break;
     }
   }
   if(!flag)
   {
    cnt=cnt+1;
   }
  flag=0;;//Skipping the even numbers
 }
 cout<<i;
 return 0;
}//i=104743
