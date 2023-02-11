// 3. Write a program to check if the given number is prime

#include<stdio.h> //add space

int input_number();
int is_prime(int n);
void output(int n, int result);

int main(void)
{
  int n,r;
  n = input_number();
  r = is_prime(n);
  output(n,r);
}

int input_number()
{
  int x;
  printf("Enter a number: ");
  scanf("%d",&x);
  return x;
}

int is_prime(int n)
{
  int p = 0,r;
  for(int i = 2 ;i<n;i++)
    {
    if(n%i == 0)
    {p = p + 1;}
    }
  r = (p == 1)? 1 : 0;
  return r;
}

void output(int n, int result)
{
  (result != 0)? printf("Not-Prime") : printf("Prime");
  //check output, it shows 9 and 4 as prime numbers
}