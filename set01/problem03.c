#include <stdio.h>
int add_numbers(int a,int b);
int input();
void output(int a, int b, int sum);
main()
{
  int a,b,sum;
  a=input();
  b=input();
  sum = add_numbers(a,b);
  output(a,b,sum);
}
int add_numbers(int a,int b)
{
int add;
add = a + b;
return add;  
  }
int input()
{
  int x;
  printf("enter the numbers : ");
  scanf("%d", &x);
  return x;
}
void output(int a, int b, int x)
{  
printf("the sum of %d and %d is %d",a,b,x);
}