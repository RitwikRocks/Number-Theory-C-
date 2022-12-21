//We try to optimise Prime Factorisation technique
/* if N is a composite number then its only one factor maybe greater than sqrt(N) rest is less than
   sqrt(n) so we run loop till sqrt(N) and if number is prime it will get out of loop and if it is comopsite 
    it is calcuklated
    Time COMPLEXITY- O(sqrt(N)) */
    
#include<iostream>
using namespace std;
void PF(long num)
{
   for(long i=2;i*i<=num;i++)
   {
       if(num%i==0)
       { long count=0;
           while(num%i==0)
           {
             count++;
             num=num/i;
           }
        cout<<"("<<i<<"^"<<count<<"),";
       }
   }
   if(num>1)
   cout<<"("<<num<<")"<<endl;
}
int main()
{
    long N;
    cout<<"Enter the number"<<endl;
    cin>>N;
    PF(N);
    return 0;
}   