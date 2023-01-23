// 5.  Write a program to find borga(x) given x.

#include<stdio.h>

int input(int x);
float borga_X(int x);
int facto(int x);
void output(int x, float result);

int main(void)
{
  int s;
  float result;
  s = input(s);
  result = borga_X(s);
  output(s,result);
}

int input(int x)
{
  printf("Enter the value of x: ");
  scanf("%d",&x);
  return x;
}

int facto(int n)
{
  if (n == 0)
    return 1;
  return n * facto(n-1);
}

float borga_X(int x)
{
  int y,i;
  float n = 1,a = 1;
  for(i = 3 ,y = 1; a > 0.000001 ; i += 2)
    {
      a = pow(x,y)/facto(i);
      n = n + a;
      y++;
    }
  return n;
}

void output(int x, float result)
{
  printf("borga(%d) = %f",x,result);
}