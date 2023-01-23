// 6.  Write a program to find the average of all the odd elements in an array

#include<stdio.h>

int input_n();
void input(int n, int a[n]);
float odd_average(int n, int a[n]);
void output(float avg);

int main(void)
{
  int n;
  float avg;
  n = input_n();
  int a[n];
  input(n,a);
  avg = odd_average(n,a);
  output(avg);
}

int input_n()
{
  int a;
  printf("How many numbers? : ");
  scanf("%d",&a);
  return a;
}

void input(int n, int a[n])
{
  for(int i=0;i<n;i++)
    {
      printf("number? : ");
      scanf("%d",&a[i]);
    }
}

float odd_average(int n, int a[n])
{
  float avr;
  for(int i = 0;i<n;i++)
    {
      if(a[i]%2 != 0)
        avr = avr + a[i];
    }
  return avr;
}

void output(float avg)
{
  printf("Average of all odd numbers is %.1f\n",avg);
}