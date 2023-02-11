 // 01.  Write a program to find the area of a triangle.

#include<stdio.h>

void input(float base, float height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);

main()
{
  float base,height,area;
  input(base,height);
}

void input(float base, float height)
{
  float area;
  printf("Enter base of the triangle");
  scanf("%f", &base);
  printf("Enter height of the triangle");
  scanf("%f", &height);
  
  find_area(base,height,&area);
  output(base,height,area);
}

void find_area(float base , float height, float *area)
  {
    *area = 0.5 * height *base;
  }

void output(float base, float height, float area)
  {
    printf("The area of triangle with base %0.2f and height %0.2f is %0.2f",base,height,area);
  }