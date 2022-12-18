#include<stdio.h>
struct _complex {
	float real,imaginary;
};
typedef struct _complex Complex;
int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);

main()
{
  int n;
  n = get_n();
  Complex c[n],result;
  input_n_complex(n, c);
  result = add_n_complex(n, c);
  output(n,c,result);
  // printf("%f + %fi", result.real,result.imaginary);
}

int get_n()
{
  int q;
  printf("Enter the number of complex numbers to be added : ");
  scanf("%d", &q);
  return q;
}

Complex input_complex()
{
Complex x;
  printf("Enter a complex number : ");
  scanf("%f %f", &x.real,&x.imaginary);
  // scanf("%f %f", &y.real,&y.imaginary);
  return x;
}

void input_n_complex(int n, Complex c[n])
{
  Complex a; 
for (int i = 0;i<n;i++)
  {
// printf("Enter a complex number : ");
// scanf("%f %f", &a.real,&a.imaginary);
    c[i] = input_complex();
  }
}

Complex add(Complex a, Complex b)
{
    Complex sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}

Complex add_n_complex(int n, Complex c[n])
{
Complex sum,a,b;
  sum.real = 0;
  sum.imaginary = 0;
for (int i=0;i<n;i++)
{
  sum = add(sum,c[i]);
}
  return sum;
}

void output(int n, Complex c[n], Complex result)
{
  Complex a; 
  for (int i=0;i<n;i++){
  printf("%f + %fi ", c[i].real,c[i].imaginary);
    if (i< n-1)
      {
      printf("+");
      }
}
  printf("is %f + %fi\n",result.real,result.imaginary);
  }