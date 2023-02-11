// 02.  Write a program to find if a triangle is scalene.

#include<stdio.h>
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

int main(void)
{
  int a,b,c,result;
  a = input_side();
  b = input_side();
  c = input_side();
  result = check_scalene(a,b,c);
  output(a,b,c,result);
}

int input_side()
{
  int s;
  printf("Enter side: ");
  scanf("%d", &s);
  return s; 
}

int check_scalene(int a, int b, int c)
{
 if (a!=b && b!=c && a!=c)
 {return 1;}
 else
 {return 0;}
}

void output(int a, int b, int c, int isscalene)
{
  if (isscalene == 1)
  {printf("The triangle with sides %d,%d & %d is scalene",a,b,c);}
  else
  {printf("The triangle with sides %d,%d & %d is not scalene",a,b,c);}
}