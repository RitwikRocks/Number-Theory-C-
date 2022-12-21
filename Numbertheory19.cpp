/*              Linear Diophantine Equation (LDA)
Diophentine equations are equations of constant and  2 variables. While Linear Diophentine equation is 
linear equation of two variables of form ax+by=c where a,b,c are constants and x,y are variables
To find its solution we use Extended Eucledian Algorithm.  A linear Diophantine Equation may have 0,
and infinite solution
ax1+by1=g (where g=gcd(a,b))   -----equation 1
ax+by=c (linear diophentine Equation) ------equation 2
multiply equation 1 by c/g
ax1*(c/g)+by1*(c/g)=g*(c/g)
equation x and y
x=x1*c/g      y=y1*c/g;
solution of LDE exist only if "   c IS DIVISIBLE BY g "
now add a/g in x and substract b/g in y
so equation 2 become
a(x+ b/g)+b(y-a/g)=c
x=x1*c/g+k*b/g
y=y1*c/g-k*a/g
NOTE-Take care when a and b both are 0
*/
#include<iostream>
using namespace std;
int egcd(int a,int b, int *x, int *y)
{
    if(b==0)
    {
        *x=1;
        *y=0;
        return a;
    }
    int x1,y1;
    int d=egcd(b,a%b,&x1,&y1);
    *x=y1;
    *y=x1-(a/b)*y1;
    return d;
}
void LDE(int a, int b, int c,int &x,int &y)
{  if(a==0&&b==0)
   {
       if(c==0)
       cout<<"Infinite solution"<<endl;
       else
       cout<<"No solution "<<endl;
       return ;
   }
   
   
   int g=egcd(a,b,&x,&y);
   if(c%g !=0)
   { cout<<"No solution"<<endl;
     return ;
   }
    else
   {
       x=x*c/g;
       y=y*c/g;
       {
    cout<<"x ="<<x<<" +K*"<<b/g<<"    "; 
    cout<<"y ="<<y<<" -K*"<<a/g<<"     ";
    }
       return;
   }
   
   
   
}

int main()
{
    int a,b,c,x=0,y=0;
    cout<<"Enter the value of a,b,c "<<endl;
    cin>>a>>b>>c;
    cout<<"General Solution of  "<<a<<"x+"<<b<<"y="<<c<<"  is  "<<endl;

    LDE(a,b,c,x,y);
    
    
    
    
    return 0;
}
