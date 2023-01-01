// Write a program to find the triangle with smallest area in n given triangles.

#include<stdio.h>

typedef struct _triangle {
	float base, altitude, area;
} Triangle;
int input_n();

Triangle input_triangle();
void input_n_triangles(int n, Triangle t[n]);
void find_area(Triangle *t);
void find_n_areas(int n, Triangle t[n]);
Triangle find_smallest_triangle(int n, Triangle t[n]);
void output(int n, Triangle t[n], Triangle smallest);

int main(void)
{
  int n;
  n = input_n();
  Triangle s,t[n];
  input_n_triangles(n,t);
  find_n_areas(n,t);
  s = find_smallest_triangle( n,t);
  output( n,t,s);  
}

int input_n()
{
  int z;
  printf("Enter the number of triangles: ");
  scanf("%d",&z);
  return z;
}

Triangle input_triangle()
{
  Triangle a;
  printf("Enter base and height: ");
  scanf("%f %f", &a.base,&a.altitude);
  return a;
}

void input_n_triangles(int n, Triangle t[n])
{
  for(int i = 0;i < n;i++)
    {
    t[i] = input_triangle();
    }
}

void find_area(Triangle *t)
{
  t->area = 0.5 * (t->base * t->altitude);
}

void find_n_areas(int n, Triangle t[n])
{
  float a;
  for(int i=0;i<n;i++)
    {
     find_area(&t[i]); 
    }
}

Triangle find_smallest_triangle(int n, Triangle t[n])
{
  Triangle a,small;
  small = t[0];
  for(int i =0;i<n;i++)
    {
       a.area = (t[i].area < small.area)? t[i].area : small.area;
    }
  return a;
}

void output(int n, Triangle t[n], Triangle smallest)
{
  printf(" %.2f \n",smallest.area);
}