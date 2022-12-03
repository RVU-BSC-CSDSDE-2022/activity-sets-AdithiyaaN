#include<stdio.h>
int input_n();
int sum_n_nos(int n);
void output(int n, int sum);

main()
{
  int a,n,sum;
  n = input_n();
  sum = sum_n_nos(n);
  output(n,sum);
  return 0;
}
int input_n()
{
  int x;
  printf("Enter any natural number");
  scanf("%d", &x);
  return x;
}
int sum_n_nos(int n)
{
  int result,i;
  for(i=0;i<=n;i++)
{
  result += i;
  }
  return result; 
}
void output(int n, int sum)
{
  printf("Sum of all natural number till n is %d", sum);
}
