// 5. Write a C program to compare three numbers using **pass by value**

#include <stdio.h>

int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);  

int main(void)
{
  int a,b,c,largest;
  a = input();
  b = input();
  c = input();
  largest = compare(a,b,c);
  output(a,b,c,largest);
}

int input()
{
  int x;
  printf("Enter numbers: ");
  scanf("%d",&x);
  return x;
}

int compare(int a, int b, int c)
{
  int largest;
  if((a>b) && (a>c))
  {
    largest = a;
  }
  else if((b>c))
    {
    largest = b;
    }
  else 
    {
      largest = c;
    }
  return largest;
}

void output(int a, int b, int c, int largest)
{
printf("The largest of the three numbers is %d\n",largest);
}