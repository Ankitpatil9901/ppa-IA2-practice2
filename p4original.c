#include<stdio.h>

int input_array_size()
{
  int n;
  printf("Enter array size\n");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n])
{
  int i,n;
  printf("Enter the elements of the array\n");
  for(i=0; i<n/2; i++)
  {
    scanf("%d",&a[i]);
  }
}

int sum_composite_numbers(int n,int a[n])
{
  int i,sum=0;
  for(i=0; i<n/2; i++)
{
  sum +=a[i];
}
return sum;
}
void out_put(int sum)
{
  int i;
  printf("The sum_composite_numbers\n");
  for(i=0;i<n-1; i++)
  {
    printf("%d +",a[i]);
  }
  printf("%d is %d \n",a[n-1],sum);
}
int main()
{
  int n,sum;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  sum=sum_composite_numbers(n,a);
  output(n,a,sum);
  return 0;
}