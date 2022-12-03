#include<stdio.h>
struct _complex {
	float real;
	float imaginary;
}
typedef struct _complex Complex;

Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);

main()
{
 complex a,b,sum;
 input_complex(a,b);
}

Complex input_complex()
{
complex x,y;
  scanf("%f %f", &x.real &x.imaginary);
  scanf("%f%f", &y.real &y.imaginary);
}

Complex add_complex(Complex a, Complex b)
{
complex sum;
 sum.real = ("%f%f", x.real &y.real);
 sum.imaginary = ("%f%f", &x.imaginary &y.imaginary);
}


