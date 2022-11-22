//Write a program to find borga(x) given x.
#include <stdio.h1>
#include <math.h>
int input()
{
  int x;
  printf("Enter x\n");
  scanf("%d");
  return x;
}

float borga_x(int x)
{
  float sum,temp,p;
  int j,i,fact;
  sum=0;
  fact=1,term=1;
  for(i=1;term>0.000001;i++)
    {
      fact=fact*i;
       if(i%2!=0)
        {
            j=(i-1)/2;
            p=pow(x,j);
            term=p/fact;
            sum=sum+term;
        }
    }
    return sum;
}

void output(int x,float sum)
{
    printf("borga(%d) = %f\n",x,sum);
}

int main()
{
    float y;
    int x;
    x=input();
    y=borga_X(x);
    output(x,y);
    return 0;
}
