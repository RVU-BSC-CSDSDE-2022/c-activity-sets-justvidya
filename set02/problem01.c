//write program to find the distance between two points
#include<stdio.h>
#include<math.h>
struct _point
{
float x,y;
};
typedef struct _point Point;

Point input()
{
  Point a;
  printf("Enter the x co-ordinates of point\n");
  scanf("%f",&a.x);
  printf("Enter the y co-ordinates of point\n");
  scanf("%f",&a.y);
  return a;
}
float dist(Point j,Point h)
{
  float res1,res2;
  float distance,p,q,r;
  res1=h.x-j.x;
  res2=h.y-j.y;
  p=pow(res1,2);
  q=pow(res1,2);
  r=p+q;
  distance=sqrt(r);
  return distance;
}

void output(Point a, Point b, float distance)
{
  printf("The distance between (%f,%f) and (%f,%f) is %f",a.x,a.y,b.x,b.y,distance);
}

int main()
{
  Point j,h;
  float i;
  j=input();
  h=input();
  i=dist(j,h);
  output(j,h,i);
}