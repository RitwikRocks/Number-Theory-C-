// to find a number is prime or not in better approach
//Time compexity Navie Approach-O(n)
//Time complexity of Better Approach O(sqrt(n))
#include<iostream>
using namespace std;
bool isPrime(int n)
{
  //claim- if a number is prime then one of its divisor is less
  //than sqrt(N) and other is greater than sqrt(N)
  //so we have to run loop till sqrt(N)
  if(n==1)
  return false;
  for(int i=2;i*i<n;i++)
  {
      if(n%i==0)
      return false;
  } 
  return true;
}
int main()
{  
    int a;
    cout<<"Enter the number ";
    cin>>a;
    if(isPrime(a))
    cout<<"Number is prime"<<endl;
    else
     cout<<"Number is not prime"<<endl;
    return 0;
    
}