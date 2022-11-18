//Write a program to find the weight of the camel given height, length and stomach radius using four functions (Structures)
#include <stdio.h>
#include<math.h>

struct camel
{
float rad, hei,len,wei;
};
typedef struct camel Camel;

Camel input()
{
  Camle c;
  printf("Enter the radius\n");
  scanf("%f",&c.rad);
  printf("Enter the height\n");
  scanf("%f",c.hei);
  printf("Enter the length\n");
  scanf("%f",&c.len);
  return c;
}

void find_weight(Camel *c)
{
  int a,b,d;
  a=pow(c->rad,3);
  b=c->hei*c->len;
  d=sqrt(b);
  c->wei=3.14*a*d;
}

void output(Camel c)
{
  printf("The weight of the camel is %f\n",c.wei);
}

int main()
{
  Camel z;
  z=input();
  find_weight(&z);
  output(z);
}