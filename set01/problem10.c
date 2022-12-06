//Write a C program to compare two strings, character by character.
//s1 p10
#include<string.h>
#include<stdio.h>


void input_two_strings(char *string1, char *string2)
{
  printf("Enter a first string :");
scanf("%s",string1); // No need & for strings
printf("Enter a second string :");
scanf("%s",string2);
}

int stringcompare(char *string1, char *string2)
{
  int x2 = strlen(string1);
  for(int i=0; i<x2; i++)
    {
      if(string1[i] > string2[i])
      {
        return 1;
      }
    }
  return 0;
}


void output(char *string1, char *string2, int result)
{
  if(result=1)
  printf("%s is greater than %s\n",string1,string2);
  else
    printf("%s is greater than %s\n",string2,string1);
}

int main()
{
int ch, flag;
char s1[100], s2[100];
input_two_strings(&s1, &s2);
flag = stringcompare(&s1, &s2);
output(&s1, &s2,flag);
return 0;
}
