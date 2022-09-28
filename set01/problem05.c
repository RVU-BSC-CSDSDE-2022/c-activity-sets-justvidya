//Write a C program to compare three numbers using pass by value
#include <stdio.h>
int input() /*function without any parameter*/
{
  int a;
  printf("Enter a number\n");
  scanf("%d",&a);
  return a;
}

/* Call by value, there are parameters (int a)*/
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
  x= input(); /*simple function call*/
  y= input();
  z= input();
  largest = compare(x,y,z); /*call by vallue*/
  printf("Largest of %d, %d and %d is %d\n",x,y,z,largest);
  return 0;
}