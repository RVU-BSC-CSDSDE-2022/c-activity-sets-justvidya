#include <stdio.h>
void input(int *a, int *b)
{
  printf("Enter two numbers\n");
  scanf("%d%d",a,b);
}
void add(int a, int b, int *c)
{
  *c=a+b;
}
void output(int a, int b, int sum)
{
  printf("The sum of %d and %d is %d", a,b,sum);
}
int main()
{
  int a, b,c;
  input(&x,&y);
  add(x,y,&z);
  output(x,y,z);
  return 0;
}