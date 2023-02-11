// 5. Write a program to find all the prime numbers between 2 to n Eratosthenes Sieve method. 
#include<stdio.h> // add space between comments, header files and function prototypes
#include<math.h>
int input_array_size();
void init_array(int n, int a[n]);
void erotosthenes_sieve(int n, int a[n]);
void output(int n, int a[n]);

int main(void)
{
  int n;
  n = input_array_size();
  int a[n];
  init_array(n,a);
  erotosthenes_sieve(n,a);
  output(n,a);
}

int input_array_size()
{
  int a;
  printf("Enter a nmuber: "); //number
  scanf("%d", &a);
  return a;
}

void init_array(int n, int a[n])
{
  for(int i = 0; i<n ;i++)
    {
      a[i] = i + 1;
    }
}

void erotosthenes_sieve(int n, int a[n])
{
  int sqr,bound;
  bound = sqrt(n);
  
  for(int i = 0; i<bound ;i++)
  {
    if (a[i] != 0 && a[i] != 1)
    {
      for(sqr = pow(a[i],2); sqr<=n; sqr = sqr + a[i])
        {
          a[sqr - 1] = 0;
        }
    }
  }
}

void output(int n, int a[n])
{
  for(int i=0;i<n;i++)
  {
    if(a[i] != 1 && a[i] != 0)
    {printf("%d\n",a[i]);}
  }
}

// NOTE : Take care about indexing cuz its a pain. and a[0] and a[1].