// 8. Write a program to add n fractions

#include<stdio.h>

typedef struct fraction
{
  int num, den;
} Fraction;

int input_n();
Fraction input_fraction();
void input_n_fractions(int n, Fraction f[n]);
int find_gcd(int a, int b);
Fraction add_fractions(Fraction f1, Fraction f2);
Fraction add_n_fractions(int n, Fraction f[n]);
void output(int n, Fraction f[n], Fraction sum);

int main(void)
{
  int n;
  n = input_n();
  Fraction f[n],sum;
  input_n_fractions(n,f);
  sum = add_n_fractions(n,f);
  output(n,f,sum);
}

int input_n()
{
 int a;
 printf("Enter number of fractions: ");
 scanf("%d",&a);
 return a;
}

Fraction input_fraction()
{
  Fraction s;
  printf("Enter a fraction: ");
  scanf("%d %d",&s.num,&s.den);
  return s;
}

void input_n_fractions(int n, Fraction f[n])
{
  for(int i=0;i<n;i++)
    {
      f[i] = input_fraction();
    }
}

int find_gcd(int a, int b)
{
  if(a==0)
    return b;
  return find_gcd(b%a,a);
}

Fraction add_fractions(Fraction f1, Fraction f2)
{
  Fraction s;
  int hcf;
  if(f1.den == f2.den)
  {
    s.num = f1.num + f2.num;
    s.den = f1.den;
  }
  else
  {s.num = f1.num * f2.den + f2.num * f1.den;
  s.den = f1.den *f2.den;}
  hcf = find_gcd(s.num,s.den);
  s.num = s.num/hcf;
  s.den = s.den/hcf;
  return s;
}

Fraction add_n_fractions(int n, Fraction f[n])
{
  Fraction m;
  m = f[0];
  for(int i=1; i<n;)
    {
     m  =  add_fractions(m,f[i]);
     i++;
    }
  return m;
}

void output(int n, Fraction f[n], Fraction sum)
{
  for(int i = 0;i<n;i++ )
  {
    printf("%d/%d",f[i].num,f[i].den);
    
    if (n-1)
      printf(" + ");
  }
  printf(" = %d/%d\n",sum.num,sum.den);
}