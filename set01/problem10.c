// 10. Write a C program to compare two strings, character by character.

#include<stdio.h>

void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);

int main()
{
  char string1[1000],string2[1000];
  input_two_strings(string1,string2);
  int result = stringcompare(string1,string2);
  output(string1,string2,result);
  return 0;
}

void input_two_strings(char *string1, char *string2)
{
  printf("Enter string : ");
  scanf("%s",string1);
  printf("Enter the next string : ");
  scanf("%s",string2);
}

int stringcompare(char *string1, char *string2)
{
  int i,res,len,len1,len2;
  res = 0;
  
  for(len1 = 0; string1[len1]!='\0';len1++);
  for(len2 = 0; string2[len2]!='\0';len2++);

  len = (len1>len2)? len1:len2;
  
  if (len1==len2)
    
    {
    for(i = 0; i < len && string1[i] - string2[i] == 0; i++)
    {
        // if (string1[i] == '\0' || string2[i] == '\0')
        // {
        //   break;
        // }
        // if (string1[i] == string2[i])
        // {
        //   res = 0;
        // }
        // if (string1[i] > string2[i])
        // {
        //   res = 1;
        //   break;
        // }
        // else if (string2[i] > string1[i])
        // {
        //   res = 2;
        //   break;
        // }
      res = string1[i] - string2[i];
      
      printf("\n%d | %d = %d\n",string1[i],string2[i],res);
    }
    return string1[i] - string2[i];
  }
    
  else
  {
    res = (len1>len2)? 1 : 2;
  }
  return res;
}

void output(char *string1, char *string2, int result){
printf("\n");

if (result == 0)
{
printf("%s is equal to %s",string1,string2);
}
else if (result < 0)
{
printf("%s is greater than %s",string2,string1);
}
else if (result > 0)
{
  printf("%s is greater than %s",string1,string2);
  printf("\n");
}
}