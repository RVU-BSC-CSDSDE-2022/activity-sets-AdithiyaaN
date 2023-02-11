// 04.  Write a program to find Sum of composite number in an array of different numbers entered by the user.

#include<stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);

main()
{
  int n,i,sum;
  n = input_array_size();
  int a[n];
  input_array(n,a);
  sum = sum_composite_numbers(n,a);
  output(sum);
}

int input_array_size()
{
  int n;
  printf("Enter size of the array: ");
  scanf("%d", &n);
  return n;
}

void input_array(int n,int a[n])
{
  for(int i=0;i<n;i++){
  printf("Enter the numbers: \n");
  scanf("%d", &a[i]);
    }
}

int sum_composite_numbers(int n, int a[n])
{
int c,sum=0;
  for(int i=0;i<n;i++)
    {
      c=0;
      for(int k=1;k<=a[i];k++)
        {
          if(a[i]%k == 0){c++;}
        }
        if (c>2){sum = sum + a[i];}
    }
        return sum;
}

void output(int sum)
{
  printf("Sum of the composite numbers is %d\n",sum);
}