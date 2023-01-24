// Write a program to find the index of a substring of a string

#include<stdio.h>

void input_string(char* a, char* b);
int sub_str_index(char* string, char* substring);
void output(char *string, char *substring, int index);

int main(void)
{
  int index;
  char string[100],substring[100];
  input_string(string,substring);
  index = sub_str_index(string,substring);
  output(string,substring,index);
}

void input_string(char* a, char* b)
{
  printf("Enter a string: ");
  scanf("%s",a);
  printf("Enter the substring: \n");
  scanf("%s",b);
}

int sub_str_index(char* string, char* substring)
{
  int w,i,j,len;
  for(len = 0; substring[len]; len++);

  for(j = 0,i = 0; string[i] != '\0' && substring[j] != '\0' ;i++)
{
 if(string[i] == substring[j])
 {
   j++;
 }
 else
 {
   j = 0;
 }
} 
  w = (j == len)? (i-j) : -1;
  return w;
} 
  

void output(char *string, char *substring, int index)
{
(index != -1)? printf("The index of '%s' in '%s' is %d\n",substring,string,index) : printf("The substring not found\n");
}