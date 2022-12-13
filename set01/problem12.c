#include<stdio.h>
struct _complex {
	float real,imaginary;
};
typedef struct _complex Complex;
int get_n();
void input_n_complex(int n, Complex c[n]);
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

void input_n_complex(int n, Complex c[n])
{
for (int i = 0;i<n;i++)
  {
printf("Enter a complex number : ");
scanf("%f %f", &c[i].real,&c[i].imaginary);
  }
}

Complex add_n_complex(int n, Complex c[n])
{
Complex sum;
  sum.real = 0;
  sum.imaginary = 0;
for (int i=0;i<n;i++)
{
  sum.real = sum.real + c[i].real;
  sum.imaginary = sum.imaginary + c[i].imaginary;
}
  return sum;
}


void output(int n, Complex c[n], Complex result)
{
  for (int i=0;i<n;i++){
  printf("%f + %fi ", c[i].real,c[i].imaginary);
    if (i< n-1)
      {
      printf("+");
      }
}
  printf("is %f + %fi",result.real,result.imaginary);
  }

