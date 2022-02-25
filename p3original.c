
int input_number()
{
  int n;
  printf("Enter the number\n");
  scanf("%d",&n);
  return n;
}

int is_composite(int n)
{
  for(int i = 2; i <= n/2; i++)
  {
    if(n%i == 0)
      return 1;
  }
  return 0;
}
