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
  Fraction s; int lcm;

  if (f1.den == f2.den)
    {
      s.num = f1.num + f2.num;
      s.den = f1.den;
    }
  else 
    {
      s.num = f1.num * f2.den + f2.num * f1.den;
      s.den = f1.den * f2.den;
    }
  lcm = find_gcd(s.num,s.den);
  s.num = s.num/lcm;
  s.den = s.den/lcm;
  return s;
}

void output(Fraction f1, Fraction f2, Fraction sum)
{
  (sum.den == sum.num)? printf("%d/%d + %d/%d = 1\n",f1.num,f1.den,f2.num,f2.den) : printf("%d/%d + %d/%d = %d/%d\n",f1.num,f1.den,f2.num,f2.den,sum.num,sum.den); 
  //reduce the fraction, check the output for other fractions (for 1/2 + 1/3 it returns 0/1)
}