// Write a program to reverse a string.

void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);

void main()
{
  int x,str,rev_str,a,reverse_a;
  input_string(x);
  str_reverse(str,rev_str);
  output(a,reverse_a);
}

void input_string(char *a)
{
  char x[100];
  printf("Enter a string: ");
  for(int i=0;i<100;i++)
  {
    if(i!="\0")
    {scanf("%s",x[i]);}
  } 
}

void str_reverse(char *str, char *rev_str)
{
  char str[100];
  int n;
  for (int i=0;i<100;i++)
    {
      if(str[i]!="\0")
      {n++;}
        }
  for(int i = 0;i<100;i++)
    {
      if(i!="\0")
      // {*rev_str = *str;}
      {
        *rev_str = str[(n-1)-i];
      }
    }
}

void output(char *a, char *reverse_a)
{
    {printf(reverse_a,a);}
}