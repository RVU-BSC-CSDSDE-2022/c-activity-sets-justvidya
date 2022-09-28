//Write a C program to add two numbers using pass by reference
#include <stdio.h>
void input(int *a, int *b)//reference 
{
  printf("Enter two numbers\n");
  scanf("%d%d",a,b);
}

void add(int a, int b, int *c)// value and reference
{
  *c=a+b;
}

void output(int a, int b, int sum)//value
{
  printf("The sum of %d and %d is %d\n", a,b,sum);
}

int main()
{
  int x, y,z;
  input(&x,&y);
  add(x,y,&z);
  output(x,y,z);
  return 0;
}