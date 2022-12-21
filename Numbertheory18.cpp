/*                               Extended Eucledian Algorithm
let a,b be two numbers and g be the gcd of a and b . Then for the equation there exist x and y
 both integers such that ax +by=g.
 Proof
 gcd(81,57) 81=57+24
            57=24*2+9
            24=9*2+6
            9=6*1+3
            6=3*2+0
            gcd is 3
let 2 equation  ax+by=g and a1x1+b1y1=g (81x+57y=3  , 57x+24y=3)
  a1=b, b1=(a mod b) =a-[a/b]*b;
  ax+by=g and bx1+(a-[a/b])y1=g ;
  ay1+ b(x1-[a/b]y1)=g
  x=y1 y=x1-[a/b];

*/

#include<iostream>
#include<time.h>
using namespace std;
int extendgcd(int a, int b, int &x, int &y)
{
  if(b==0)
  {
      x=1;
      y=0;
      return a;
  }
  int x1,y1;
  int d=extendgcd(b,a%b,x1,y1);
  x=y1;
  y=x1-(a/b)*y1;
  return d;
}
int main()
{
    int x=0,y=0,a,b;
    cout<<"Enter the value of a and b "<<endl;
    cin>>a>>b;
    extendgcd(a,b,x,y);
    cout<<"x = "<<x;
    cout<<"   y = "<<y;
    return 0;
}