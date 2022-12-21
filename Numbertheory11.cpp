/*            Total Divisors from PRIME FACTORIZATION
 we can use sieve to find total prime divisors from the number. And we know that total number of divisors can be calculated using 
 N=(P1^2)*(P2^5)*(P3^2)
 total prime divisors =(2+1)*(5+1)*(2+10
 */
#include<iostream>
#include<vector>
using namespace std;
vector<int> v;
int A[100000]={0};
void TDF(int n)
{ int ctr=0;
  for(int i=2;i*i<=n;i++)
  {
      int count=0;
      if(n%i==0)
      {
        while(n%i==0)
        {
            count++;
            n=n/i;
        }
        ctr++;
      v.push_back(count);
    
      }
  }
  if(n>1)
  {ctr++;
   v.push_back(1);
  }
  long sum=1;
  for(int i=0;i<ctr;i++)
  sum=sum*(v[i]+1);
  cout<<"Total divisor is "<<sum<<endl;
}
int main()
{
    int a;
    cout<<"Enter the number"<<endl;
    cin>>a;
    TDF(a);
    return 0;
}