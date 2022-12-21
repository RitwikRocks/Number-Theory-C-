/*                              Eucledian Division algorithm for GCD(HCF)
  we know that GCD(140,12) is 4 . To get this
  140=12*11+8
  12=8*1+4
  8=4*2+0
  as soon as the remainder become zero the quotient is the hcf of two numbers
  So in this method we recursively call the function untill the remainder becomes zero
  gcd(a,b)={a, b=0
            b,a%b   }
  Time complexity -It is found using Lames theorem , So the time complexity is O(log(min(a,b)))
  */
 #include<iostream>
 using namespace std;
 int gcd(int a,int b)
 {
    if(b==0)
    return a;           //final answer when remainder become zero then quotient become answer
    else
    return gcd(b,a%b)   ;      //this is recusion when b becomes zero this will run 
    
 }                  
 int main()
 {
     int a,b;
     cout<<"Enter the two numbers"<<endl;
     cin>>a>>b;
     cout<<"Gcd of two numbers is "<<endl;
     cout<<gcd(a,b);
     return 0;
 }