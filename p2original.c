#include<stdio.h>
int input_side()
{
  int a;
  printf("Enter the Value \n:");
  scanf("%d",&a);
  return 0;
}

int check_scalene(int a,int b,int c)
{
  if (a!=b!=c)
  printf("Triangle is Scalene\n");
  else
  printf("Triangle is not a Scalene");
}

void output(int a,int b,int c,int isscalene)
{
  printf("The Triangle is Scalene");
} 

int main()
{
int a,b,c;
a=input_side();
b=input_side();
c=input_side();
int check_scalene(int a,int b,int c);
void output(int a,int b,int c,int isscalene);
return 0;
}