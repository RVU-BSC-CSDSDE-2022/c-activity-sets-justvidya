#include <stdio.h>
int main(void)
{
  int n,i, sum = 0;
  printf("Enter last natural number\n");
  scanf("%d", &n);

  for(i=0; i<=n ; i++ )
    sum = sum+i;

  printf("Sum of natural numbers upto %d is %d\n",n,sum);
  return 0;

}
