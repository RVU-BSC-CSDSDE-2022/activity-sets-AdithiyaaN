// 1. Write a program to find the distance between 2 points

#include<stdio.h>
void input(float *x1, float *y1, float *x2, float *y2);
float find_distance(float x1, float y1, float x2, float y2);
void output(float x1, float y1, float x2, float y2, float distance);

int main(void)
{
  float a1,b1,a2,b2,distance;
  input(&a1,&b1,&a2,&b2);
  distance = find_distance(a1,b1,a2,b2);
  output(a1,b1,a2,b2,distance);
}

void input(float *x1, float *y1, float *x2, float *y2)
{
  printf("Enter the two points: ");
  scanf("%f %f",x1,y1);
  printf("Enter the two points: ");
  scanf("%f %f",x2,y2);
}

float find_distance(float x1, float y1, float x2, float y2)
{
  // Formula sqroot[(x2 - x1)^2 + (y2 - y1)^2] 
  float x,y,s;
  x = x2 - x1;
  y = y2 - y1;
  x = x*x;
  y = y*y;
  s = x + y;
  // Finding square root |where n is the guess, g is the place holder.
  float n=s/2,g = 0;
  for(int i=0;i < 5;i++)
    {
     g = (n + (s/n))/2;
     n = g;
    }
  return n;
}

void output(float x1, float y1, float x2, float y2, float distance)
{
  printf("%f\n",distance);
}
