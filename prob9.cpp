#include<iostream>
//pythagorean triplet
using namespace std;
int main()
{
 long int a,b,c,flag=0;
 for(a=1;a<1000;++a)
  {
  for(b=1;b<1000;++b)
   {
   for(c=1;c<1000;++c)
    {
     if((a*a+b*b==c*c) && (a+b+c==1000))
      {flag=1;
       break;
      }
    }if(flag) break;
	}if(flag) break;
	}
    if(flag)
 cout<<a<<","<<b<<" and "<<c<<" are the pythagorean triplet which adds up to 1000";
 else
  cout<<"NO pythagorean triplet";
 return 0;
}
