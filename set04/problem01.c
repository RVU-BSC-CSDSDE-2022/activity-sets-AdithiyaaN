// 1. Write a program to find sum of two fractions

#include<stdio.h>

void input(int *num1, int *den1, int *num2, int *den2);
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

void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den)
{
  *res_num = num1 + num2;
  if (den1 != den2 && (den1%den2 == 0 || den2%den1 == 0))
  {
    *res_den = (den1 > den2)? den1 : den2;
    *res_num = ((*res_den/den1) * num1) + (*res_den/den2) * num2;
  }
  else if (den1 != den2 && (den1%den2 != 0 || den2%den1 != 0))
  {
    *res_den = den1 * den2;
    *res_num = ((*res_den/den1) * num1) + (*res_den/den2) * num2;
  }
  else
  {
    *res_den = den1;
    *res_num = num1 + num2;
  }
}

void output(int num1, int den1, int num2, int den2, int res_num, int res_den)
{
  (res_den != den1)? printf("%d/%d + %d/%d = %d/%d\n",num1,den1,num2,den2,res_num,res_den) : printf("%d/%d + %d/%d = %d\n",num1,den1,num2,den2,res_num);
}