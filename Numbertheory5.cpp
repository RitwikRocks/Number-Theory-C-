/*                                  PRIME FACTORISATION Using Sieve
     Sieve is very helpful tool.We can do Prime factorisaton in O(logn) time complexity.
     We go from 2 to n and mark the minimum divisor if than number
     This method is same as Sieve of Ertothenes
     */

#include<iostream>
using namespace std;
void PFS(long n)
{
  long PF[100000];
  for(long i=2;i<=n;i++)
  PF[i]=-1;
  for(long i=2;i*i<=n;i++)
  {    if(PF[i]==-1)
    {
      for(long j=i*i;j<=n;j=j+i)
     { if(j%i==0)
        PF[j]=i;
       
     }
    }
  }
  
  long k=n;

  while(PF[k] !=-1)
  {  
     cout<<PF[k]<<" ";
     k=k/PF[k];
  }
    cout<<k<<endl;
  


}    
int main()
{
    long a;
    cout<<"Enter the number ";
    cin>>a;
    PFS(a);
    return 0;
}
  