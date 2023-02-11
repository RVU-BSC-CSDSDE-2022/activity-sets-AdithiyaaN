// 6. Write a C program to compare three numbers using **pass by reference**

#include <stdio.h>

int input();
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);

int main(void)
{
  int a,b,c,largest;
  a = input();
  b = input();
  c = input();
  compare(a,b,c,&largest);
  output(a,b,c,largest);
}

int input()
{
  int x;
  printf("Enter a number");
  scanf("%d", &x);
  return x;
}

void compare(int a, int b, int c, int *largest)
{
    if(a>b && a>c)
    {
    *largest = a;
    }
    else if(b>c)
    {
    *largest = b;  
    }
    else
    {
      *largest = c;
    }
}

void output(int a, int b, int c, int largest)
{
  printf("The largest number of a,b,c is %d",largest);
}
