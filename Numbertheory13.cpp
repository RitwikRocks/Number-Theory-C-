/*     USE OF EULER TOIENT FUNCTION to calculate Sum of GCD of number n
  we can use Brute force method to to calculate GCD sum. And the time complexity is O(Q*N(logN))
  now, let us assume N=12
 GCD(1,12)=1;                 GCD(7,12)=1;
  GCD(2,12)=2;                GCD(8,12)=4;
  GCD(3,12)=3;                GCD(9,12)=3;
  GCD(4,12)=4;                GCD(10,12)=2;
  GCD(5,12)=1;                GCD(11,12)=1;
  GCD(6,12)=6;                GCD(12,12)=12;
  1. Instread of running loop from 1 to n we run loop from 1 to sqrt(n) and calculate divisor d how many no are there,
  2.Then we use euler toient function to find how many times that divisor divides the number #(12/d)
   eg d=1; #(12/1)=#(12)={1,5,7,11}=4
   Time complexity =O(Nlog(N)+Q*sqrt(N))
   NlogN is slower than sqrt(N)
   */
  #include<iostream>
  using namespace std;
  int count(int n,int d)
  {  
    
      int no=n/d;
      int ctr=no;
      if(no==1)
      ctr=1;
      else
      {
      for(int i=2;i*i<=n;i++)
      {
          if(no%i==0)
          {
              ctr=ctr*(i-1);
              ctr=ctr/i;
          }
          while(no%i==0)
          no=no/i;
      }
      if(no>1)
      {
          ctr=ctr*(no-1);
          ctr=ctr/no;
      }
      }
      
      return ctr;
  }
  int main()
  {
      int n;
      cout<<"Enter the number"<<endl;
      cin>>n;
      int d1=0,d2=0;
      int res=0;
      for(int i=1;i*i<=n;i++)
      { 
          if(n%i==0)
          { 
              d1=i;
              d2=n/i;
              res=res+d1*count(n,d1);
              if(d1 !=d2)
              res=res+d2*count(n,d2);
          }
      }
      cout<<"The total sum of GCD from 1 to n with n is "<<endl;
      cout<<res<<endl;
      return 0;
  }
