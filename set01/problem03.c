#include <stdio.h>
int input()
{
  int a;
  scanf("%d",&a);
  return 0;
}

int sum(int a, int b)
{
  int sum;
  sum= a+b;
  return sum;
}
int output(int a, int b, int c)
{
  printf("The sum of %d and %d is %d\n",a,b,c);
}
int main()
{
  int x,y,z;
  printf("Enter two numbers\n");
  x= intput();
  y=input();
  c=sum(x,y);
  output(x,y,z);
  return 0;
}