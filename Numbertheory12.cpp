/*                       EULER TOTIENT FUNCTION (ETF)
  this function counts the number of positive integer from 1 to n which are coprime with n.(gcd of two numbers is 1).
  for prime numbers let it be n, the totient function gives n-1 ;
  eg(#(7)={1,2,3,4,5,6,})=total=6
  so from this we comclude that, N=#(p1^x1)*(p2^x2)*(p3^x3)= (N*(p1-1)*(p2-1)*(p3-1))/p1*p2*p3;
  Time complexity=O(sqrt(N))
  */
 #include<iostream>
 #include<vector>
 using namespace std;
 vector<int> A;
 long ETF(int n)
 { int count=0;
   long res=n;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)                                                //algorithm for finding all prime number;
         
        {     count++;
               A.push_back(i);
            while(n%i==0)
            {  
                n=n/i;
            }
            
        }
    }
    if(n>1)
    {count++;
     A.push_back(n);
    }
    

    for(int i=0;i<count;i++)
    {
        res=res*(A[i]-1);
        res=res/A[i];
    }
    return res;
    
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