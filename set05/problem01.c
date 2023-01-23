// 1.  Write a program to find the distance between two points.

#include<stdio.h>
#include<math.h>
struct _point {
  float x;
  float y;
};

typedef struct _point Point;

Point input();
void dist(Point a, Point b, float *res);
void output(Point a, Point b, float res);

int main(void)
{
  Point a,b;
  float res;
  a = input();
  b = input();
  dist(a,b,&res);
  output(a,b,res);
}

Point input()
{
  Point z;
  printf("Enter a point : ");
  scanf("%f %f",&z.x,&z.y);
  return z;
}

void dist(Point a, Point b, float *res)
{
  *res = sqrt(pow(b.x - a.x,2) + pow(b.y - a.y,2));
}

void output(Point a, Point b, float res)
{
  printf("The Distance between (%.1f,%.1f) and (%.1f,%.1f) is %.1f\n",a.x,a.y,b.x,b.y,res);
}