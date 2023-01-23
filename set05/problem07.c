// 7.  Write a program to find out if the name of the camel is a nice name.

#include<stdio.h>
#include<string.h>

void input(char *name);
int has_nice_name(char *c);
void output(int res);

int main(void)
{
  int res;
  char name[100];
  input(name);
  res = has_nice_name(name);
  output(res);
}

void input(char *name)
{
  printf("Enter camel's name: ");
  scanf("%s",name);
}

int has_nice_name(char *c)
{
  int v = 0,w = 0;
  for (int i=0; c[i] != '\0' ;i++)
    {
      if (c[i] == 'a' || c[i] == 'e' || c[i] == 'i' || c[i] == 'o' || c[i] == 'u') 
        {v = v + 1;}
      else {w = w + 1;}
    }
  if ((v > 2) && (w > 2)) {return 1;}
  else {return 0;}
}

void output(int res)
{
  res == 1 ? printf("Camel has a nice name"):printf("Camel has a bad name");
}