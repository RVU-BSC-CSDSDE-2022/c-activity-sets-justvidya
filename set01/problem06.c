#include <stdio.h>
void input(int *a,int *b,int *c)
{
  printf("Enter 3 numbers\n");
  scanf("%d%d%d",a,b,c);
}

void compare(int a, int b, int c)
{
  if(b>a)
    a=b;
  if(c>a)
    a=c;
  return a;
}

int main()
{
  int j,k,l,m;
  intput(&j,&k,&l);
  m= compare(j,k,l);
  printf("Largest number is %d",m);
  return 0;
}