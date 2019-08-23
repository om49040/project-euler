#include<iostream>
using namespace std;
int main()
{
 long int n=4000000;
 long int a=0,b=2,sum=0,c=0;
 while(b<n)
  {
   c=4*b + a;//next fibbonaci even number
   if(c>n)
   break;
   a=b;
   b=c;
   sum=sum+c;
  }
  sum=sum+2;
  cout<<sum;
 return 0;
} //sum=4613732
  
 
  
 
