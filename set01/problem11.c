#include<stdio.h>
struct _complex {
	float real;
	float imaginary;
};
typedef struct _complex Complex;
Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);

main()
{
 Complex a,b,sum;
 a=input_complex();
 b=input_complex();
 sum = add_complex(a,b);
 output(a,b,sum);
 return 0;
}

Complex input_complex()
{
Complex x;
  printf("Enter a complex number : ");
  scanf("%f %f", &x.real,&x.imaginary);
  // scanf("%f %f", &y.real,&y.imaginary);
  return x;
}

Complex add_complex(Complex a, Complex b)
{
Complex sum;
 sum.real = (a.real + b.real);
 sum.imaginary = (a.imaginary + b.imaginary);
 return sum; 
}
output(Complex a, Complex b, Complex sum)
{
  printf("The sum of %.2f+i%.2f and %.2f+i%.2f is %.2f+i%.2f", a.real,a.imaginary,b.real,b.imaginary,sum.real,sum.imaginary);
}

