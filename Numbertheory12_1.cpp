/*                       EULER TOTIENT FUNCTION (ETF)
  this function counts the number of positive integer from 1 to n which are coprime with n.(gcd of two numbers is 1).
  for prime numbers let it be n, the totient function gives n-1 ;
  eg(#(7)={1,2,3,4,5,6,})=total=6
  so from this we comclude that, N=#(p1^x1)*(p2^x2)*(p3^x3)= (N*(p1-1)*(p2-1)*(p3-1))/p1*p2*p3;
  we can use sieve to calculate the Euler toeint function in O(Nlog(logN)) time.
  */
 #include<iostream>
 #include<vector>
 using namespace std;
 vector<int> A;
 int B[100000];
 long ETF(int n)
 { 
   
   for(int i=1;i<=n;i++)
   B[i]=i;
    for(int i=2;i<=n;i++)
    {
        if(B[i]==i)
        {
            for(int j=i;j<=n;j=j+i)
            {
              B[j]=B[j]/i;
              B[j]=B[j]*(i-1);
            }
        }
    }
    return B[n];
    
 }
 int main()
 {
     int N;
     cout<<"Enter the number"<<endl;
     cin>>N;
     cout<<"Total number of numbers which are coprime is "<<endl;
     cout<<ETF(N);
     return 0;
 }