//Write a program to find the weight of a camel, given height, length and stomach radius using four functions.

#include<stdio.h>
#include<math.h>
void input_camel_details(float *radius, float *height, float *length);
float find_weight(float radius, float height, float length);
void output(float radius, float height, float length, float weight);

main()
{
  float radius,height,length;
  float weight;
  input_camel_details(&radius,&height,&length);
  weight = find_weight(radius,height,length);
  output(radius,height,length,weight);
}

void input_camel_details(float *radius,float *height,float *length)
{
  printf("Radius:\tHeight:\tLength: ");
  scanf("%f %f %f", radius,height,length);
}

float find_weight(float radius,float height, float length)
{
float w;
  w = 3.14 * pow(radius,3) * sqrt(height*length);
  return w;
}

void output(float radius, float height, float length, float weight)
{
  printf("The weight of the camel with radius: %2f, Height: %2f, and length: %2f is %f", radius,height,length,weight);
}