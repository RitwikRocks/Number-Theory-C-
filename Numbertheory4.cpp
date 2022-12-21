  /*                             BINARY EXPONENTIATION
         binary exponentiation we find (a^x)
         In general Brute Force approach we find (a^x) in O(n) time
         but in binary exponentiation we find in O(logn) time complexity
         Here we take three things
         if power is odd we multiply resultant by base
         resultant                    base                power
         1                             2                   5
         2                             2                   4
         2                             4                   2
         2                             16                  1
         32                            16                  0
         Ans - Resultant =32
         */

#include<iostream>
using namespace std;
long BE(long a,long x)
{
  long res=1;
  while(x !=0)
  {
      if(x%2 !=0)
     { res=res*a;
      x--;
     }
      else
     { 
      a=a*a;
      x=x/2;
     }
  }
  return res;
}    
int main()
{
    long a,b;
    cout<<"Enter the base"<<endl;
    cin>>a;
    cout<<"Enter the Power"<<endl;
    cin>>b;
    BE(a,b);
    cout<<"The value is"<<endl;
    cout<< BE(a,b);
    return 0;
}    