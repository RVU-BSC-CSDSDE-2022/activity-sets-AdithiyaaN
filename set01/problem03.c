// 3. Write a C program to add two numbers using **pass by value**

#include <stdio.h>

int add_numbers(int a,int b);
int input();
void output(int a, int b, int sum);

int main(void)
{
  int a,b,sum;
  a=input();
  b=input();
  sum = add_numbers(a,b);
  output(a,b,sum);
}

int input()
{
  int x;
  printf("Enter a number: ");
  scanf("%d", &x);
  return x;
}

int add_numbers(int a,int b)
{
    int add;
    add = a + b;
    return add;  
}

void output(int a, int b, int x)
{  
  printf("The sum of %d and %d is %d\n",a,b,x);
}