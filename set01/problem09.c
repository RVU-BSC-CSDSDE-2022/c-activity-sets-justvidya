//Write a C program to find the square root of a number.
#include <stdio.h>
float n,x;
float s,d;
float input()
{
  printf("Enter any value\n");
  scanf("%f",&n);
}


float square_root(float n)
{
  if(n>=0)
    {
     for(s=1;s*s<=n;s++); //calculating decimal part of the square root
     s--;
     for(d = 0.001;d < 1.0;d += 0.001) // calculating the fractional part
         {
           x = (double)s + d;
           if((x*x > (double)n))
             {
               x = x - 0.001;
               break;
             }
         }
     } 
  return x;
}

void output(float n, float sqrroot1)
{
  printf("The square root of %f is %lf\n",n,sqrroot1);
}

int main(void)
{
  double sqrroot;
  input();
  sqrroot= square_root(n);
  output(n,sqrroot);
  return 0;
}