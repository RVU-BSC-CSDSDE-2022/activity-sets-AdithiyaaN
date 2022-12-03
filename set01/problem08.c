#include <stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_n_array(int n, int a[n]);
void output(int n, int a[n],int sum);

int main()
{
  int sum,n;
  n = input_array_size();
  int a[n];
  input_array(n,a);
  sum = sum_n_array(n,a);
  output(n,a,sum);
  return 0;
}
int input_array_size()
{
  int a;
  printf("Input array size: ");
  scanf("%d", &a);
  return a;
}
void input_array(int n, int a[n])
{
  int i;
  for(i;i<n;i++)
  {
  scanf("%d", &a[i]);
  }
}
int sum_n_array(int n, int a[n])
{
  int i,result=0;
  for(i=0;i<n;i++)
  {
  result = result + a[i];
  }
  return result;
}
void output(int n, int a[n],int sum)
{
  int i;
  for(i=0;i<n;i++)
  {
  printf("%d",a[i]);
    if(i < n-1) {
      printf("+");
    }
  }
  printf(" is %d",sum);
}