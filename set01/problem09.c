#include<stdio.h>
float input();
float square_root(float n);
void output(float n, float sqrroot);

main() 
{
  float x,s,n;
  x = input();
  s = square_root(x);
  output(x,s);
  return 0;
}

float input()
{
  float a;
  printf("Enter any number : ");
  scanf("%f", &a);
  return a;
}

float square_root(float n)
{
 int i;
 float x0,x1;
 x0 = n/2;
 while (1)
 {
   if (i == 4)
   {
   break;
   }
   i++;
   x1 = (x0 + (n/x0))/2;
   x0 = x1;                
 } 
  return x1;
}

void output(float n, float sqrroot)
{
  printf("Square root of %f is %f", n,sqrroot);
}