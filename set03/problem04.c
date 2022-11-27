//Write a program to find Sum of composite number in an array of different numbers entered by the user
#include<stdio.h>
int input_array_size()
{
  int n;
  printf("Enter the array size\n");
  scanf("%d",&n);
  return n;
}

void input_array(int n, int a[n])
{
  printf("Enter array elements\n");
  for(int i=0; i<n;i++)
    {
      scanf("%d",&a[i]);
    }
}
int sum_composite_numbers(int n, int a[n])
{
  int sum,c;
  for(int i=0;i<n;i++)
  {
      for (int j=1;j<=a[i];j++)
       {
          if(a[i]%j==0)
          c=c+1;
       }
    if (c!=2)
    sum=sum+a[i];
  }
  return sum;
}
void output(int sum)
{
  printf("%d",sum);
}

int main(void)
{
  int n;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  int sum=sum_composite_numbers(n,a);
  output(sum);
}