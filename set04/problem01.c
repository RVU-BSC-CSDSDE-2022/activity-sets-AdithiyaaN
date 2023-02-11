// 1. Write a program to find sum of two fractions

#include<stdio.h>

void input(int *num1, int *den1, int *num2, int *den2);
int gcd(int a, int b);
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den);
void output(int num1, int den1, int num2, int den2, int res_num, int res_den);

int main(void)
{
  int num1,den1,num2,den2,res_num,res_den;
  input(&num1,&den1,&num2,&den2);
  add(num1,den1,num2,den2,&res_num,&res_den);
  output(num1,den1,num2,den2,res_num,res_den);
}

void input(int *num1, int *den1, int *num2, int *den2)
{
  printf("Enter first fraction: ");
  scanf("%d %d",num1,den1);

  printf("Enter second fraction: ");
  scanf("%d %d",num2,den2);
}

int gcd(int a, int b)
{
  if (a == 0)
    return b;
  return gcd(b%a, a);
}

void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den)
{
int sum_num,sum_den,hcf; 
 if (den1 == den2)
  {
    *res_den = den1;
    *res_num = num1 + num2;
    
    while (1)
      {  
        if(*res_den%2 == 0 && *res_num%2 == 0)
          {
            *res_den = *res_den/2;
            *res_num = *res_num/2;
          }
          else {break;}
      }
  }
 else
  {
    sum_num = num1 * den2 + num2 * den1;
    sum_den = den1 * den2;
    hcf = gcd(sum_num,sum_den);
    *res_num = sum_num/hcf;
    *res_den = sum_den/hcf;
  }
}

void output(int num1, int den1, int num2, int den2, int res_num, int res_den)
{
  (res_num == res_den)? printf("%d/%d + %d/%d = 1\n",num1,den1,num2,den2): //too many arguments, don't need to add res_num and res_den
 printf("%d/%d + %d/%d = %d/%d\n",num1,den1,num2,den2,res_num,res_den);
}

//Reduce the fractions (2/4 becomes 1/2)