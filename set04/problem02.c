// 2. Write a program to find the smallest of three fractions

#include<stdio.h>
typedef struct {
    int num, den;
} Fraction;

Fraction input_frac();
Fraction smallest_frac(Fraction f1, Fraction f2, Fraction f3);
void output(Fraction f1, Fraction f2, Fraction f3, Fraction result);

int main(void)
{
  Fraction f1,f2,f3,result;
  f1 = input_frac();
  f2 = input_frac();
  f3 = input_frac();
  result = smallest_frac(f1,f2,f3);
  output(f1,f2,f3,result);
}

Fraction input_frac()
{
  Fraction a;
  printf("Enter a fraction: ");
  scanf("%d %d",&a.num,&a.den);
  return a;
}

Fraction smallest_frac(Fraction f1, Fraction f2, Fraction f3)
{
  Fraction s;
  int a,b,c,r;
  a = f1.num/f1.den;
  b = f2.num/f2.den;
  c = f3.num/f3.den;

  // r = (a < b)? (a < c? a:c) : (b < c? b:c);
  if (a < b && a < c) {s = f1;}
  else if (b < c) {s = f2;}
  else {s = f3;}
  return s;
}

void output(Fraction f1, Fraction f2, Fraction f3, Fraction result)
{
  printf("\n""The smallest of %d/%d, %d/%d and %d/%d is %d/%d\n",f1.num,f1.den,f2.num,f2.den,f3.num,f3.den,result.num,result.den);
}