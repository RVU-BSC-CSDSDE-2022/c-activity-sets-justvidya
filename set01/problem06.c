//Write a C program to compare three numbers using pass by reference
#include <stdio.h>
/* Call by reference*/
void input(int *a,int *b,int *c)
{
  printf("Enter 3 numbers\n");
  scanf("%d%d%d",a,b,c);
}

/*call by value*/
int compare(int a, int b, int c) /*formal parameters a,b,c*/
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
  input(&j,&k,&l); /* Call by reference*/
  printf("Values of j,k,l are\n");
  printf("%d %d %d\n",j,k,l);
  m = compare(j,k,l); /*Call by value*/
  /* m is required to recieve(return a) from compare function */

  /*Actual parameters j,k,l*/
  printf("Largest number is %d\n",m);
  return 0;
}