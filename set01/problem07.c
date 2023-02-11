// 7. Write a C program to find sum of all natural numbers until _n_

#include<stdio.h>

int input_n();
int sum_n_nos(int n);
void output(int n, int sum);

int main(void)
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
  printf("Enter any natural number: ");
  scanf("%d", &x);
  return x;
}

int sum_n_nos(int n)
{
  int result=0,i;
    for(i=0;i<=n;i++)
    {
     result += i;
    }
  return result; 
}

void output(int n, int sum)
{
  printf("%d\n", sum);
}
