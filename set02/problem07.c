//Write a program to find out if the name of the camel is a nice name.
#include <stdio.h>
#include <string.h>
void input(char *name)
{
  printf("Enter the name of the camel\n");
  gets(name);
}

int has_nice_name(char *name)
{
  int vowels,cons,res;
  for(int i=0;name[i];i++)  
    {
    	if((name[i]>=65 && name[i]<=90)|| (name[i]>=97 && name[i]<=122))
    	{
        if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'||name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O' ||name[i]=='U')
		      vowels++;
            else
             cons++;
      }
    }
  if(vowels==2 && cons==2)
    res=1;
  else
    res=0;
  return res;
}

void output(int res)
{
  if(res==1)
    printf("The camel has a nice name\n");
  else if(res==0)
    printf("The camel does not have a nice name\n");
}

int main(void)
{
  char name[100];
  input(name);
  int res;
  res=has_nice_name(name);
  output(res);
}