// Write a program to find the weight of the camel given height, length and stomach radius using four functions *(Structures)*

#include<stdio.h>
#include<math.h>

struct camel {
	float radius,height,length,weight;
};

typedef struct camel Camel;

Camel input();
void find_weight(Camel *c);
void output(Camel c);

void main() //int main 
{
  Camel c; 
  c = input();
  find_weight(&c);
  output(c);
  return 0;
}

Camel input()
{
  Camel s;
  printf("radius: "); //make it seperate statements
  scanf("%f", &s.radius);

  printf("height: ");
  scanf("%f", &s.height);

  printf("length: ");
  scanf("%f",&s.length);
  
  return s;
}

void find_weight(Camel *c)
{
    float pi = 3.14;
   // *c = M_PI * pow(s.radius,3) * sqrt(s.height * s.length);
    c->weight = pi * pow(c->radius,3) * sqrt(c->height * c->length);     //indentation
}

void output(Camel c)
{
  printf("The weight of camel with radius: %0.2f, height: %0.2f and length: %0.2f is %0.2f\n",c.radius,c.height,c.length,c.weight);
}