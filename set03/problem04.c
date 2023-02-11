// 4. Write a program to find nth number in fibonacci sequence.

#include<stdio.h> //add space

int input();
int find_fibo(int n);
void output(int n, int fibo);

int main(void)
{
  int n,fibo;
  n = input();
  fibo = find_fibo(n);
  output(n,fibo);
}

int input()
{
  int f;
  printf("Enter any number: ");
  scanf("%d",&f);
  return f;
}

int find_fibo(int n)
{
  int a[n],f;
      a[0] = 0;
      a[1] = 1;
      a[2] = 1;
  // Formula f(n) = f(n-1) + f(n-2) where n is a iteration veriable
  for(int i=2; i <= n ;i++)
    {a[i] = a[i-1] + a[i-2];}
  return a[n];
}

void output(int n, int fibo)
{
  printf("fino(%d) = %d \n",n,fibo);
}