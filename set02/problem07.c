// Write a program to find the area of a triangle.

#include <stdio.h>
typedef struct _triangle {
  float base, altitude, area;
} Triangle;

Triangle input_triangle();
void find_area(Triangle *t);
void output(Triangle t);

int main(void) {
  Triangle x;
  x = input_triangle();
  find_area(&x);
  output(x);
}

Triangle input_triangle() {
  Triangle a;
  printf("Enter base and altitude: ");
  scanf("%f %f", &a.base, &a.altitude);
  return a;
}

void find_area(Triangle *t) { t->area = 0.5 * (t->base * t->altitude); }

void output(Triangle t) { printf("%f\n", t.area);}