// Write a program to find GCD _(HCF)_ of two numbers.

#include<stdio.h>
int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);

void main()
{
  int x,y,gcd;
  x = input();
  y = input();
  gcd = find_gcd(x,y);
  output(x,y,gcd);
}

int input()
{
  int z;
  printf("Enter any number: ");
  scanf("%d", &z);
  return z;
}

int find_gcd(int a, int b)
{
  int c=1,h=1;
  c = a>b ? a:b;
  for(int i=1;i<=c;i++)
    {
      if (a%i == 0 && b%i ==0)
      {h = i;}
    }
  return h;
  }

void output(int a, int b, int gcd)
{
  printf("%d",gcd);
}