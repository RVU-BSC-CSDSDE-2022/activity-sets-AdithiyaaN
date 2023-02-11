// 4. Write a C program to add two numb?ers using **pass by reference**

#include <stdio.h>

int input();
void output(int a, int b, int sum);
void add(int,int,int*);

int main(void)
{
  int a,b,sum;
  a=input();
  b=input(); 
  add(a,b, &sum);
  output(a,b,sum);
}

int input()
{
  int x;
  printf("Enter the numbers");
  scanf("%d", &x);
  return x;
}

void add(int a, int b, int *so)
{
*so = a + b; 
}

void output(int a, int b, int x)
{  
printf("The sum of %d and %d is %d\n",a,b,x);
}