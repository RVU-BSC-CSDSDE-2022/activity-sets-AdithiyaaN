// Write a program to find the index of the largest number in an array

#include<stdio.h> //add space

int input_size();
void input_array(int n, int a[n]);
int find_largest_index(int n, int a[n]);
void output(int index);

int main(void)
{
  int n,index;
  n = input_size();
  int a[n];
  input_array(n,a);
  index = find_largest_index(n,a);
  output(index);
}

int input_size()
{
  int t;
  printf("Enter array size: "); //"Enter array size"
  scanf("%d",&t);
  return t;
}

void input_array(int n, int a[n])
{
  for(int i=0; i<n ;i++)
    {
      printf("Enter a number: ");
      scanf("%d",&a[i]);
    }
}

int find_largest_index(int n, int a[n])
{
  int largest = 0,dex;
  for(int i = 0; i<n ;i++)
    {
      if (a[i] > largest)
      {
        largest = a[i];
        dex = i+1;
      }
    }
  return dex;
}

void output(int index)
{
  printf("The index of the largest number in the array is %d\n",index);
}