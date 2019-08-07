#include<iostream>
using namespace std;
int main()
{
 long int n;
 cout<<"Enter the Number till which we will add the fibbonacci\n";
 cin>>n;
 if(n<2)
 return 0;
 long int a=0,b=2,sum=0,c=0;
 while(b<n)
  {
   c=4*b + a;//next fibbonaci even number
   if(c>n)
    break;
   a=b;
   b=sum;
   sum+=c;
  }
  sum+=2;
 cout<<"Sum of even fibbonacci numbers upto "<<n<<" = "<<sum;
 return 0;
} 
  
 
