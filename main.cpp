#include <iostream>
#include <climits>
#include <cfloat>
#include <iomanip>
#include <cmath>


int main()
{
  const int Nmax=3;
  const int Mmax=3;
  int matrix[Nmax][Mmax];
  int amin=1000000;
  int sum=0;
  int n;
  std::cin>> n;
  for(int i=0; i<n; i++)
    for(int j=0;j<n; j++)
  {
    std::cin >> matrix[i][j];
  }

for(int i=0; i<n; i++)
    for(int j=0;j<n; j++)
  {
    if(matrix[i][j]<amin)
      amin=matrix[i][j];
  }

for(int i=0; i<n; i++)
    for(int j=0;j<n; j++)
  {
    if(matrix[i][j]==amin)
      sum+=1;
  }
int s=0;
for(int i=0; i<n; i++)
    for(int j=0;j<n; j++)
  { int a=abs(matrix[i][j]);
    for(int i=2; i<=a; i++)
    {
      if(a%i==0)
      {
        continue;
      }
      else
      s+=1;

    }
  }
std::cout<<s<<std::endl;
if(sum==2 && s>=2)
{
  int a=1;
  int b=1;
  for(int i=0; i<n-1; i++)
  {
    for(int j=0;j<n; j++)
      {
        a=a*matrix[i][j];
        b=b*matrix[i+1][j];
      
    if(a<b)
    {
      int tmp=matrix[i][j];
      matrix[i][j]=matrix[i+1][j];
      matrix[i+1][j]=tmp;
    }
      }
  }
}


  for(int i=0; i<n; i++)
  {
    for(int j=0;j<n; j++)
  {
    std::cout<<matrix[i][j]<<" ";
      std::cout<< std::endl;
  }
  
  }

}