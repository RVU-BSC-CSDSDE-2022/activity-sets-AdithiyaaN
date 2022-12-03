#include <stdio.h>
int input();
void output(int a, int b, int sum);
void add(int,int,int*);
main()
{
  int a,b,sum;
  a=input();
  b=input();
  add(a,b, &sum);
  output(a,b,sum);
}
void add(int a, int b, int *so)
{
*so = a + b; 
}
int input()
{
  int x;
  printf("enter the numbers");
  scanf("%d", &x);
  return x;
}
void output(int a, int b, int x)
{  
printf("the sum of %d and %d is %d",a,b,x);
}