//Write a program to find the area of a triangle.
#include<stdio.h>

typedef struct triangle 
{                  //underscore not required
	float base, altitude, area;
} Triangle;

Triangle input_triangle()
{
  Triangle T;
  printf("Enter the base of the triangle\n");
  scanf("%f",&T.base);
  printf("Enter the altitude of the triangle\n");
  scanf("%f",&T.altitude);
  return T;
}

void find_area(Traingle *t)
{
  t.area=(t.base*t.height)/2;
}

void output(Triangle t)
{
  printf("The area of triangle is %f\n"t.area);
}

int main(void)
{
  Triangle t;
  t=input_triangle();
  find_area(&t1);
  output(&t1);

} 
