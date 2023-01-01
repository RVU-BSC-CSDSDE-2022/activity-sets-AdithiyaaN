// 2. Write a program to find whether the given 3 points form a triangle

#include<stdio.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);

int main(void)
{
  float x1,y1,x2,y2,x3,y3;
  int r;
  input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
  r = is_triangle(x1,y1,x2,y2,x3,y3);
  output(x1,y1,x2,y2,x3,y3,r);
}

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
  printf("Enter the points: ");
  scanf("%f %f %f %f %f %f",x1,y1,x2,y2,x3,y3);
}

int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
   // Area of triangle of (1/2) [x1 (y2 – y3 ) + x2 (y3 – y1 ) + x3(y1 – y2)] = 0
  int area,result;
  area = 0.5 * (x1 * (y2 - y3 ) + x2 * (y3 - y1) + x3 * (y1 - y2));
  result = area > 0? 1 : 0;
  return result;
}

void output(float x1, float y1, float x2, float y2,float x3, float y3, int result)
{
(result == 0) ? printf("Given points do not form a triangle") : printf("Given points do form a triangle");
}