// Write a program to add two fractions

#include<stdio.h>

typedef struct {
    int num, den;
} Fraction;

Fraction input_fraction();
int find_gcd(int a, int b);
Fraction add_fractions(Fraction f1, Fraction f2);
void output(Fraction f1, Fraction f2, Fraction sum);

int main(void)
{
  Fraction f1,f2,sum;
  int a,b;
  f1 = input_fraction();
  f2 = input_fraction();
  sum = add_fractions(f1,f2);
  output(f1,f2,sum);
}

Fraction input_fraction()
{
  Fraction i;
  printf("Enter a fraction: ");
  scanf("%d %d",&i.num,&i.den);
  return i;
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
  int a,b;
  
  a = f1.den > f2.den ? f1.den : f2.den;
  b = f1.den < f2.den ? f1.den : f2.den;
  s.den = find_gcd(a,b);
  s.num = f1.num * (s.den/f1.den) + f2.num * (s.den/f2.den);
  return s;
}

void output(Fraction f1, Fraction f2, Fraction sum)
{
  printf("%d/%d + %d/%d = %d/%d\n",f1.num,f1.den,f2.num,f2.den,sum.num,sum.den);
}