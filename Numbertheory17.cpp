/*                               MILLER RABIN PRIMARILITY TEST
this test is also based on Fermats little theorem. Here we check for two conditions
1.a^m-1=1(mod m) is satisfied by prime number
2.if given number is prime then it must divide atlesast one of the multiple of given series
 n=number
 n-1=(2^s*d)
 a^n-1 is congurent to 1 under mod n;
 (a^n-1-1) is congurent to 0
 using (a^2-b^2)=(a+b)*(a-b)
 a^((2^s-1)*d+1)+a^((2^s-2)*d+1)+a^((2^s-3)*d+1)+...+(a*d-1)
 and n must divide atleast one of its divisor
 The composite numbers which satisfy primarility test is called strong lairs
 */
#include<iostream>
#include<time.h>
using namespace std;

int main()
{  srand(time(0));
    cout<<"Enter the number"<<endl;
    long N;
    cin>>N;
    long p=N-1,s=0;
    while(p%2==0)
    {
        s++;
        p=p/2;
    }
    int d=p;
    for(int i=0;i<5;i++)
    {
        long a=(rand()%(N-3)+2);
        if(check(N,a,d,s))
        return false;
    }
    return true;
    }
    return 0;

}