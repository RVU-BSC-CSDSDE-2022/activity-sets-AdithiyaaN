#include<stdio.h>
int input_number();
int is_composite(int n);
void output(int n, int result);

main()
{
  int n,result;
  n = input_number();
  result = is_composite(n);
  output(n,result);
}

int input_number()
{
int a;
printf("Enter a number: ");
scanf("%d", &a);
return a;
}

int is_composite(int n) 
{
  int i = 1,c = 0;
  while(i<n)
    {
      i++;
      if(n%i == 0)
      {
        c++;
      }
    }
  if(c > 1){return 1;}
  else{return 0;}
}

void output(int n, int result)
{
  if (result == 1){
    printf("%d is a composite number",n);
  }
  else{printf("%d is not a composite number\n",n);}
}