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
      for(i=len, k=0;i>=0;i--,k++)
        {
         
   /* // use for loop to iterate the string   
    for (i = 0; i < len/2; i++)  
    {  
        // temp variable use to temporary hold the string  
        temp = str[i];  
        str[i] = str[len - i - 1];  
        str[len - i - 1] = temp;  
    }  *///when same string is reversed
  printf ("%s",*rev_str);  
}


void output(char *a, char *reverse_a)
{
  printf (" After reversing the string: %s\n", reverse_a);  
}

int main(void)
{
  char a[100],rev[100];
  //int i;
         input_string(a);
  //str[100]=a[100];
  /*for(i=0;*(a+i)!='\0';i++)
      str[i]=*(a+i);
  str[i]='\0';*/
        str_reverse(a,rev);
  //      output(a,rev);
}