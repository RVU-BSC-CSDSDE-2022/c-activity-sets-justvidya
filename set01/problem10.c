#include<string.h>
#include<stdlib.h>
#include<stdio.h>

void com2str(char str1[100], char str2[100]); 
void concat2str(char str1[100], char str2[100]); 
void length(char str[100]);
int main()
{
int ch;
char s1[100], s2[100];
 printf("Enter a first string :");
scanf("%s",s1);
printf("Enter a second string :");
scanf("%s",s2);
printf("\nResults of two strings compare :"); 
com2str(s1,s2);
}
void com2str(char str1[100], char str2[100])
{
  /* USING BUILT IN FUNCTIONS 
if (strcmp(str1,str2)==0)
printf("Both the strings are equal ....\n");
else
printf("Both the strings are not equal ....\n");
*/
  int x2 = strlen(str1);
  for(int i=0; i<x2; i++)
    {
      if(str1[i]!= str2[i])
      {
        printf("%s is not equal to %s\n",str1,str2);
        exit(0);
      }
    }
   printf("%s is equal to %s\n",str1,str2);
}
