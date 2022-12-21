/* Prime Factorisation(Better Approach)
  we generally use Brute force method to implement prime factorisation
  but we can optimise it and do the same thing in less time
  if N is a composite number then we can get one of its factor in less trhan or equal to sqrt(N)
  rest 1 factor will remain which has power 1 which can be anyting between sqrt(N) and N and if it is prime it is N
  Time Complexity-O(sqrt(n)) */


 #include<iostream>
 using namespace std;
 void PF(long num)
 {
    for(long i=2;i*i<=num;i++)
    {
        if(num%i==0)
        {
            long count=0;
            while(num%i==0)
            {
                count++;
                num=num/i;
            }
            cout<<"("<<i<<"^"<<count<<"),";
        }
    }
    if(num>1)
    cout<<"("<<num<<"^1)";
 } 
 int main()
 {
     long N;
     cout<<"Enter the number"<<endl;
     cin>>N;
     PF(N);
     return 0;
 }