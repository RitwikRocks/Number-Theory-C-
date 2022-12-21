/* Modular Exponentiation
   it is the modulus of exponentiation of number
   example-(2^5)%2
   here we find exponent then remainder
   this can be done using binary exponentiaton
   modulus operater has lower preciendance than * operator
   */

#include<iostream>
using namespace std;
long ME(long a,long b,long m)
{
   long res=1;
   a=a%m;
   while(b !=0)
   {
       if(b%2 !=0)
       {res=(res*a)%m;
         b--;
       }
       a=a*a%m;
       b=b/2;
   }
   return res;
}
int main()
{
    long a,b,c;
    cout<<"Enter the base "<<endl;
    cin>>a;
    cout<<"Enter the exponent"<<endl;
    cin>>b;
     cout<<"Enter the modulo"<<endl;
    cin>>c;
    cout<<"Modular Exponentiation is"<<endl;
    cout<<ME(a,b,c);
    return 0;
}