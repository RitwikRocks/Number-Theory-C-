/*                                    Matrix Exponentiation using Binary exponentition
  here the approch is just like Binary Exponentiation .Instread of numbers we deals with matrix so rest of thing is alike
  Time Complexity -O(matrix^3^(logn))
*/
#include<iostream>
using namespace std;
void mul(int A[][100],int res[][100],int n)
{ int mul[100][100];
   for(int i=0;i<n;i++)
   {
     for(int j=0;j<n;j++)
     {
       mul[i][j]=0;
       for(int k=0;k<n;k++)
       {
         mul[i][j]=mul[i][j]+(res[i][k]*A[k][j]);
       }
     }
   }
   for(int k=0;k<n;k++)
   {
     for(int j=0;j<n;j++)
     res[k][j]=mul[k][j];
   }
  
 
}
void ME(int A[][100],int n,int m)
{
  int res[100][100];
  int I[100][100];
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      if(i==j)
      I[i][j]=1;
      else
      I[i][j]=0;
    }
  }
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
     res[i][j]=I[i][j];
  }
  int r=1;
  while(m !=0)
  {
    if(m%2 !=0)
   { mul(A,res,n);
     m--;
   }
   else
   {
    mul(A,A,n);
    m=m/2;
   }

    
  }
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    cout<<res[i][j]<<" ";
    cout<<endl;
  }

}

int main()
{
  int A[100][100],B[100][100];
  cout<<"Enter the size "<<endl;
  int n,m;
  cin>>n;
  cout<<"Enter matrix one row wise "<<endl;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    cin>>A[i][j];
  }
  cout<<"Enter the exponentiation factor "<<endl;
  cin>>m;
  ME(A,n,m);
  return 0;
}
