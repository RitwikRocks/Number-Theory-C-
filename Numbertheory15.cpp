/*                       SEGMENTED SIEVE
   Segmented Sieve is used to generate prime numbers between range from L to R
   when we are given prime numbers from 10^10-10^10+10^6 then normal sieve fail and we have to use segmented sieve
   step 1- Generate prime numbers upto sqrt(R)
   step 2-create an array of size R-L+1 and set all elements to be 0
   step 3-for each prime p im range 2 to sqrt(R) for every multiple  m of R in range m to R mark indez (m-L ) as 1
   */
  #include<iostream>
  #include<vector>
  #include<math.h>
  #include<algorithm>
  #define N 1000000
  using namespace std;
   bool A[N+1];
  void prime( )
  {
     
      for(long i=2;i<=N;i++)
      A[i]=true;
      for(long i=2;i*i<=N;i++)
      {
          if(A[i]==true)
          {
              for(long j=i*i;j<=N;j=j+i)
              A[j]=false;
          }
      }
    
  }
  //generating vector to store value of all prime from 2 to sqrt(r)
  vector<int> generateprime(int n)
  {
     vector<int> ds;
     for(int i=2;i<=n;i++)
     {
         if(A[i]==true)
         ds.push_back(i);
     }
      
     return ds;
  }

  int main()
  {   prime();
      cout<<"Enter the left and right boundary"<<endl;
      long l,r;
      cin>>l>>r;
      vector<int> p=generateprime(sqrt(r));
      //create dummy array of size (r-l+1)
      vector<long> dummy((r-l+1),1);
      
     
      //for all prime numbers from 2 to sqrt(r) mark all its multiple 0 or false
      for(long pr=0;pr<p.size();pr++)
      {
         long firstmul=(l/p[pr])*p[pr];
         if(firstmul<l)
         firstmul+=p[pr];
         for(long j=(firstmul);j<=r;j=j+p[pr])
         {
             dummy.at(j-l)=0;
    
         }
      }
      for(long j=l;j<=r;j++)
      {
          if(dummy[j-l]==1)
          cout<<j<<endl;
      }
  
      
      
      return 0;

  }