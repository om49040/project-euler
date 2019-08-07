#include<iostream>
using namespace std;
//program for only 1000 numbers
int main()
{
 int i,sum=0;
 sum=(110/2)*(3 + 3*109*3);// sum for all the multiples of three
 // sum for the multiples of 5
 for(i=5;i<1000;i+=5)
  {
   if(i%15==0)
    continue;
   sum+=i;
  }
 cout<<"\n Sum of multiples of 3 and 5="<<sum;
 return 0;
}

 
