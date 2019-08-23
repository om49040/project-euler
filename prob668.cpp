#include<math.h>
#include<iostream>
//program for square root smooth num
using namespace std;
int main()
{
// works for integer values of n
 long long int n,temp1,temp=1,cnt=1;
 int i=2,j;long double rt;
 cout<<"Enter a number above 0 till which we have to find out the number of sqrt smooth num\n";
 cin>>n;
 while(i<=n)
 {
  rt=sqrt(i);
  temp1=i;
  for(j=2;j<rt;j+=1)
   {
    while(temp1%j==0)
     {
      temp=temp*j;//multiplies prime factors
      temp1=temp1/j;
     }
   }//finds the prime factors and multiplies
   if(i==temp)
    {cnt=cnt+1;cout<<"\n"<<i<<"\n";}//counts the numer of smooth sqrt numbers
   ++i;
   temp=1;
 }
 cout<<cnt;
 return 0;
}//cnt=2811077773

   
