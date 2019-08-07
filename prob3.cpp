#include<math.h>
#include<iostream>
using namespace std;
int main()
{
 int flag=0;
 long long int n,mp=0;
 cout<<"Enter the umber whose prime factor is to be found......";
 cin>>n;
 long double h=sqrt(n);
 for(int i=3;i<=h;i+=2)
  { 
    if(n%i==0)
     { 
       mp=i;flag=1;
     }
  }
 if(flag==1)
  {
   cout<<"The largest prime factor of the number="<<mp;
   return 0;
  }
 else
   {
    cout<<"The number "<<n<<" is a prime number";
   }
 return 0;
}
  
