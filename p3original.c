#include<stdio.h>
int input()
{
  int n;
  printf("enter the number:");
  scanf("%d",&n);
  return n;
}

int composite(int n)
{ 
  if(n==0||n==1)//0&1 is not prime nor is_composite
    return 2;
  else{
  for (int i=2;i<n/2;i++)
  {
    if (n%i==0)
    {
      return 1;//composite
    }
  } 
return 0;//prime 
}
  }


void output(int n,int c)
{
  if(c>0)
  {
    printf("%d is a composite number",n);
  }
  else 
  printf("%d is not composite number",n);
}

int main()
{
int n,c;
n=input();
c=composite(n);
output(n,c);
return 0;
}