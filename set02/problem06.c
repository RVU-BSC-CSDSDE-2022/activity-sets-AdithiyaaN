// Write a program to reverse a string.

#include <stdio.h>
void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);
int main(void) {
  char str[100], rev_str[100];
  input_string(str);
  str_reverse(str, rev_str);
  output(str, rev_str);
}

void input_string(char *a) {
  printf("Enter a string: ");
  scanf("%s", a);
}

void str_reverse(char *str, char *rev_str) {
  int len = 0;
  char q;
  for (int i = 0; str[i]; i++) {
    len = len + 1;
  }

  for (int i = 0; i < len / 2; i++) {
    q = str[i];
    str[i] = str[(len - 1) - i];
    str[(len - 1) - i] = q;
  }
  for (int i = 0; i <= len; i++) {
    rev_str[i] = str[i];
  }
}

void output(char *a, char *reverse_a) {
  { printf("%s\n", reverse_a); }
}