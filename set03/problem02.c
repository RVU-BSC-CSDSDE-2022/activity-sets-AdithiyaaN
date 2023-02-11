// 2. Write a program to find whether the given 3 points form a triangle

#include<stdio.h> //add space
#include<math.h>

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);

int main(void)
{
  float x1,y1,x2,y2,x3,y3;
  int result; //result
  input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
  result = is_triangle(x1,y1,x2,y2,x3,y3);
  output(x1,y1,x2,y2,x3,y3,result);
}

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
  printf("Enter the points: "); //take the input in pairs
  scanf("%f %f",x1,y1);
  scanf("%f %f",x2,y2);
  scanf("%f %f",x3,y3);
}

int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
// Area of triangle of (1/2) [x1 (y2 – y3 ) + x2 (y3 – y1 ) + x3(y1 – y2)] = 0
  
  float area;
  int result;
  area = fabs(0.5 * (x1 * (y2 - y3 ) + x2 * (y3 - y1) + x3 * (y1 - y2)));
  result = (area > 0.0)? 1 : 0;
  return result;
  
}

void output(float x1, float y1, float x2, float y2,float x3, float y3, int result)
{
  if(result == 0) {printf("Given points do not form a triangle");}
  else {printf("Given points do form a triangle");} 

//check with points that do form a triangle (eg - (1,5),(2,5),(4,6) or (1,1),(0,0),(1,0))
}