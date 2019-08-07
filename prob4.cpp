#include<iostream>
using namespace std;
int main()
{
 int pp,i,j,temp,a,s=0,flag=0;
 for(i=100;i<=999;++i)
 {
   for(j=i;j<=999;++j)
   {
    a=i*j;
    temp=a;
    while(temp!=0)
     {
      s=s*10+(temp%10);
      temp=temp/10;
     }
    if(a==s && flag==0)
     {
      pp=a;flag=1;
     }
    else if(a==s && a>pp)
     {
      pp=a;
     }
	s=0;
   }
  }
 if(!flag)
 {
  cout<<"\n No pallindromic product in the given range\n";
 }
 else
 {
  cout<<"\nThe largest pallindromic product in the 3 range digits="<<pp;
 }
 return 0;

}
    
 

