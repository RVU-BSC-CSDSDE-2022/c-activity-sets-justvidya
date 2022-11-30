//Write a program to find whether the given 3 points form a triangle

#include <stdio.h>

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
  printf("Enter the x and y co-ordinates of point a\n");
  scanf("%f%f",x1,y1);
  printf("Enter the x and co-ordinates of point b\n");
  scanf("%f%f",x2,y2);
  printf("Enter the x and co-ordinates of point c\n");
  scanf("%f%f",x2,y2);
}

int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
  int i=0;
  float math;
  math=(x1*(y2-y3))+(x2*(y3-y1))+(x3*(y1-y2));
  if(math!=0)
    i=1;
  return i;
}

void output(float x1, float y1, float x2, float y2,float x3, float y3, int result)
{
  if(result==1)
    printf("The three points (%f,%f), (%f,%f) and (%f,%f) do form a triangle\n",x1,y1,x2,y2,x3,y3);
  else
    printf("The three points (%f,%f), (%f,%f) and (%f,%f) do not form a triangle\n");    
}

int main(void)
{
  float x1,x2,x3,y1,y2,y3,result;
  input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
  result=is_triangle(x1,y1,x2,y2,x3,y3);
  output(x1,y1,x2,y2,x3,y3,result);
}