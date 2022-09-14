#include <stdio.h>
int input()
{
  int a;
  printf("Enter a numbers\n");
  scanf("%d",&a);
  return a;
}

int compare(int a, int b, int c)
{
  if (b>a)
    a=b;
  if (c>a)
    a=c;
  return a;
}

int main()
{
  int x,y,z,largest;
  x= input();
  y= input();
  z= input();
  largest= compare(x,y,z);
  printf("Largest of %d, %d and %d is %d\n",x,y,z,largest);
  return 0;
}