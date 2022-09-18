
/*
 WITHOUT USING ARRAYS


#include <stdio.h>
int main(void)
{
  int n, i, sum=0, a; /* i is loop counter 
  printf("Enter total number of elements\n");
  scanf("%d",&n);
      printf("Enter %d elements\n",n);
  for(i=0; i<n; i++)
    {
      scanf("%d", &a);
      sum= sum+a;
    }

  printf("Sum of %d numbers is %d",n,sum);
  return 0;
}
*/



/* Using Arrays      */
#include <stdio.h>
int n;
int input_array_size()
{
  printf("Enter total number of elements\n");
  scanf("%d",&n);
  return n;
}

void input_array(int n, int a[n])
{
  int i; /* i is usually loop counter*/
  printf("Enter %d array elements\n",n);

   for(i=0; i<n; i++)
     scanf("%d", &a[i]);
 /* no return since array is call by reference. It directly changes actual parameter values*/
}

int sum_n_array(int n, int a[n])
{
  int sum=0,i;
  for(i=0;i<n;i++)
    sum=sum+a[i];
  return sum;
}

void output(int n, int a[n],int sum)
{
  int i;
  printf("Entered array elements are\n");
  for(i=0; i<n; i++)
    printf("%d \n",a[i]);
  printf("Sum = %d\n", sum);
}

int main(void)
{
  
  int /*size*/ size,sum1;
    size= input_array_size();
  int B[size];
  input_array(size, B); /* Call by value (size) and Call by reference (array B)*/
  sum1 = sum_n_array( size, B);
  output(size,B,sum1);
    return 0;
}