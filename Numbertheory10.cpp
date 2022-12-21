 /*                        Multipicative inverse modulo
       if a*b is congurent to 1 under mod N then, b is the multiplicative inverse of a under mod N.
        To calculate the multipicative inverse we use two method
        1.Fermats Little function 
        2.Extented Eucledian Function
        here we discuss Fermats little Function
        it says
        a^(m-1) is congurent to 1 under(mod N)
        dividing bith lhs and rhs by a
        a(m-2) is congurent to a^(-1) under (mod N)
        hence a(m-2) is modulous inverse of a^(-1)

     Note- Multipicative inverse of function exist only when the two no a and N are coprime
     */                                            
#include<iostream>
#include<math.h>
using namespace std;
int fermats(int a,int N)
{
    int b=pow(a,N-2);
    return b%N;
}
int main()
{
  int a,N,b;
  cout<<"Enter the number"<<endl;
  cin>>a;
  cout<<"Enter the mod"<<endl;
  cin>>N;
  if(N%a==0 ||a%N==0)
    cout<<"Inverse does not exist"<<endl;
    else
  cout<<fermats(a,N);
  return 0;
}