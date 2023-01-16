// 3. Write a program to find the `nCr` of given n and r

#include<stdio.h>
void input_n_and_r(int *n, int *r);
int nCr(int n, int r);
int facto(int a);
void output(int n, int r, int result);

int main(void)
{
int n,r,result;
  input_n_and_r(&n,&r);
  result = nCr(n,r);
  output(n,r,result);
}

void input_n_and_r(int *n, int *r)
{
  printf("Enter n and r: ");
  scanf("%d %d",n,r);
}

int facto(int a)
{
  int f = 1;
  for(int i = 1; i<=a ;i++) {f = f * i;}
  return f;
}


int nCr(int n, int r)
{
  int ncr = 0;
  // NCr = n!/ (r! (n – r)!)
  ncr = facto(n)/(facto(r) * facto(n - r));
  return ncr;
}

void output(int n, int r, int result)
{
  printf("For n = %d and r = %d, nCr = %d\n",n,rresult);
}