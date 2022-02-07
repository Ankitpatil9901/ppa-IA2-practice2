#include<stdio.h>
int input_side()
{
  int a;
  printf("Enter the Value \n:");
  scanf("%d",&a);
  return a;
}

int check_scalene(int a,int b,int c)
{
  int r;
  if (a!=b&&b!=c&&c!=a)
  {
    r=1;
  }
  else
  {
    r=0;
  }
}

void output(int a,int b,int c)
{
  int r;
  if (r=1)
  printf("The Triangle is Scalene");
  else
  printf("The Triangle is not scalene");
}

int main()
{
int a,b,c;
a=input_side();
b=input_side();
c=input_side();
check_scalene( a,b,c);
output(a,b,c);
return 0;
}