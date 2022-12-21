    /*  Number Theroy 2
         Sieve of Eratosthenes
         this meythod is used when we have given large query 
         step 1 we find sqrt(n)
         step 2 from 2 to sqrt(n) we find the multiple
         Time complexity of this algorithm -O(nlog(log(n)))   */

#include<iostream>
using namespace std;
void Sieve(long n)
{   long isPrime[1000];
   for(long i=0;i<=n;i++)
   {
     isPrime[i]=1;
   }
   isPrime[0]=isPrime[1]=0;
   for(long i=2;i*i<=n;i++)
   {
       if(isPrime[i]==1)
       {
           for(long j=i*i;j<=n;j=j+i)
           {
               isPrime[j]=0;
           }
       }
   }
   for(long i=0;i<=n;i++)
   {
       if(isPrime[i]==1)
       cout<<i<<" ";
   }

}
int main()
{
    long max;
    cout<<"Write number upto which prime number is to be find"<<endl;
    cin>>max;
    Sieve(max);
    return 0;
}