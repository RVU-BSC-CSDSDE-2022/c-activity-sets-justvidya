//Write a program to reverse a string.
#include <stdio.h>
#include<string.h>

void input_string(char *a)
{
   printf (" Enter the string: ");  
   gets(a);
}

void str_reverse(char *str, char *rev_str)
{
  
  int i, len, temp,k;  
  len = strlen(str);
     for(int i=0,j=n-1;i<n;i++,j--)
    {
      rev_str[i]=str[j];
    }
         
   /*////// use for loop to iterate the string   
    for (i = 0; i < len/2; i++)  
    {  
        // temp variable use to temporary hold the string  
        temp = str[i];  
        str[i] = str[len - i - 1];  
        str[len - i - 1] = temp;  
    }  *///////when same string is reversed
   
}


void output(char *a, char *reverse_a)
{
  printf (" After reversing the string %s: %s\n",a, reverse_a);  
}

int main(void)
{
  char a[100],rev[100];
  input_string(a);
  str_reverse(a,rev);
  output(a,rev);
}