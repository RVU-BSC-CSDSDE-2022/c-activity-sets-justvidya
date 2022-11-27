//Write a program to find GCD (HCF) of two numbers
#include <stdio.h>
int input()
{
  int num;
  scanf("%d", &num);
  return num;
}
int find_gcd(int a, int b)
{
    int i, min, hcf=1;
    /* Find minimum between two numbers */
    min = (a<b) ? a : b;

    for(i=1; i<=min; i++)
    {
        /* If i is factor of both number */
        if(a%i==0 && b%i==0)
        {
            hcf = i;
        }
    }
    return hcf;
}


void output(int a, int b, int gcd)
{
  printf("HCF of %d and %d = %d\n", a, b, gcd);
}

int main(void)
{
  int num1, num2, gcd;
  num1=input();
  num2=input();
  gcd=find_gcd(num1,num2);
  output(num1 ,num2 ,gcd);
}