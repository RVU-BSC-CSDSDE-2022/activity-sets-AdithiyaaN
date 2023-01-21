// 6. Write a program to count the number of words in a string using strtok (_string.h_)

#include<stdio.h>
#include<string.h>

void input_string(char *a);
void copy_string(char *bla, char *string);
int count_words(char *string);
void output(char *bla, int no_words);

int main(void)
{
  int no_words;
  char string[100],bla[100]; 
  input_string(string);
  copy_string(bla,string);
  no_words = count_words(string);
  output(bla,no_words);
}

void input_string(char *a)
{
  printf("Enter a string: ");
  gets(a);
}

void copy_string(char *bla, char *string)
{
  for(int i = 0; string[i] != '\0';i++)
    {
      bla[i] = string[i];
    }
}

int count_words(char *string)
{
  int count=0;
  char* p = strtok(string, " ");
  while(p != NULL)
    {
      p = strtok(NULL, " ");
      count = count + 1;
    }
  return count;
}

void output(char *bla, int no_words)
{
 printf("The number of words in '%s' is %d",bla,no_words); 
}