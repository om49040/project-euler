#include<iostream>
using namespace std;
int main()
{
 int pp=0,i,j,temp,a=0,s=0,flag=0,p,q;
 for(i=999;i>=100;--i)
 {
   for(j=i;j>=100;--j)
   {
    temp=a=i*j;
    while(temp!=0)
     {
      s=s*10+(temp%10);
      temp=temp/10;
     }
    
     if(a==s && a>pp)
     {
      pp=a;p=i,q=j;
     }
    s=0;
   }
  }
 if(flag)
 {
  cout<<"\n No pallindromic product int the given range";
 }
 else
 {
  cout<<pp;
 }
 return 0;

}//pp=906609
    
 
