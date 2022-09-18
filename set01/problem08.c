#include <stdio.h>
int main(void)
{
  int n, i, sum=0, a; /* i is loop counter */
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