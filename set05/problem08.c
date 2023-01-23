// 8.  Write program to find the weight of a truck load of n camels.

#include<stdio.h>
#include<math.h>

typedef struct _camel {
    float radius, height, length, weight;
} Camel;

int input_n();
void input(int n, Camel c[n], float *truck_weight);
void find_camel_weight(int n, Camel c[n]);
float compute_total_weight(int n, Camel c[n], float truck_weight);
void output(float total_weight);

int main(void)
{
int n;
n = input_n();
Camel c[n];
float tw,t;
input(n,c,&tw);
find_camel_weight(n,c);
t = compute_total_weight(n,c,tw);
output(t);
}

int input_n()
{
  int i;
  printf("Number of camels? : ");
  scanf("%d",&i);
  return i;
}

void input(int n, Camel c[n], float *truck_weight)
{
  for(int i=0;i<n;i++)
    {
      printf("%d camel radius: ",i+1);
      scanf("%f",&c[i].radius);
      printf("%d camel height: ",i+1);
      scanf("%f",&c[i].height);
      printf("%d camel length: ",i+1);
      scanf("%f",&c[i].length);
    }
  printf("Enter the truck's weight: ");
  scanf("%f",truck_weight);

}

void find_camel_weight(int n, Camel c[n])
{
  float p = 3.16;
  for (int i=0;i<n;i++)
    {
      c[i].weight = p * pow(c[i].radius,3) * sqrt(c[i].height * c[i].length); 
    }
}

float compute_total_weight(int n, Camel c[n], float truck_weight)
{
  int w;
  for(int i=0;i<n;i++)
    {
      w = w + c[i].weight;
    }
  w = w + truck_weight;
  return w;
}

void output(float total_weight)
{
  printf("Total weight is %.1f",total_weight);
}