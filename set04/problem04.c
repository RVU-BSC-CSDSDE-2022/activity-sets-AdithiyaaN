// 4. Write a program to evaluate a polynomial at a given point using.

#include<stdio.h> 
#include<math.h>

int input_degree();
void input_coefficients(int n, float a[n]);
float input_x();
float evaluate_polynomial(int n, float a[n], float x);
void output(int n, float a[n], float x, float result);

int main(void)
{
  int n;
  n = input_degree();
  float a[n],x,result;
  input_coefficients(n,a);
  x = input_x();
  result = evaluate_polynomial(n,a,x);
  output(n,a,x,result);
}

int input_degree()
{
  int a;
  printf("Enter the degree of the polynomial: ");
  scanf("%d",&a);
  return a;
}

void input_coefficients(int n, float a[n])
{ 
  for(int i = 0; i<=n ;i++)
    {
      printf("Enter coefficient x^%d : ",i);
      scanf("%f",&a[i]);
    }
}

float input_x()
{
  float z;
  printf("Enter the value of x: ");
  scanf("%f",&z);
  return z;
}

float evaluate_polynomial(int n, float a[n], float x)
{
  float s;
  for(int i = 0;i<=n;i++)
    {
      s = s + a[i] * pow(x,i);
    }
  return s;
}

void output(int n, float a[n], float x, float result)
{
  printf("%.2f",result);
}