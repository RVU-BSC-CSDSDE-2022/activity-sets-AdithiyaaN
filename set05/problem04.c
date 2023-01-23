// 4.  Write a program to find out the mood of a Camel.

#include<stdio.h>

void input_camel_details(float *radius, float *height, float *length);
int find_mood(float radius, float height, float length);
void output(float radius, float height, float length, int mood);

int main(void)
{
  float r,h,l;
  int m;
  input_camel_details(&r,&h,&l);
  m = find_mood(r,h,l);
  output(r,h,l,m);
}

void input_camel_details(float *radius, float *height, float *length)
{
  printf("radius: ");
  scanf("%f",radius);
  printf("length: ");
  scanf("%f",length);
  printf("height: ");
  scanf("%f",height);
}

int find_mood(float radius, float height, float length)
{
  int a;
  if (radius < height && radius < length) {a = 0;}
  if (height < radius && height < length) {a = 1;}
  if (length < radius && height > length) {a = 2;}
  return a;
}

void output(float radius, float height, float length, int mood)
{
  if (mood == 1)
{printf("\nCamel is happy\n");}
  if (mood == 2)
{printf("\nCamel is tense\n");}
  if (mood == 0)
{printf("\nCamel is sick\n");}
}