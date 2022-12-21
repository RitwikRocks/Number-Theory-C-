/*                     FERMATS TEST FOR PRIMARILITY(Non-Deterministic test)
Fermats test is uesd to find the prime numbers in very short time with some amount of error. It finds prime with 100% accuracy
but fails in composite number finding when CHARMICHAEL NUMBER is encountered.
It is based on Fermats LITTLE theorem 
a^m-1 is congurent to 1 under mid m. In general this theorem does not hold for composite number.
step - we use random numbers from 2 to n-2 and check whether a^m-1 gives 1 when found modulo.If this is true then ni is prime
*/
#include<iostream>
#include<time.h>
using namespace std;
long binpow(int a,int m,int n)                //algorithm of binary exponentiation
{
  long res=1;
  while(m !=0)
  {
      if(m%2!=0)
      {
          res=res*a%n;
          m--;
      }
      a=a*a%n;
      m=m/2;
  }

  return res;
}
bool isPrime(int N)                  //algorithm for Fermats Test
{
  if(N<4)
  {
      if(N==2||N==3)
      return true;
      else
      return false;
  }
    srand(time(0));
  for(int i=0;i<5;i++)
  {  
      long a=(rand()%(N-3)+2);
      
      if(binpow(a,N-1,N)!=1)
      {   
          return false;
          break;
      }
  }
  return true;

}
int main()
{
    long N;
    cout<<"Enter the number to found"<<endl;
    cin>>N;
    if(isPrime(N))
    cout<<"Number "<<N<<" is a prime number"<<endl;
    else
    cout<<"Number "<<N<<" is a not a prime number"<<endl;
    return 0;
}