#include<stdio.h>
#include<math.h>

struct _point
{
float x;
float y;
};
typedef struct _point Point;

Point input()
{
  Point a;
  printf("Enter the co-ordinates of point\n");
  scanf("%f",&a.x);
  scanf("%f",&a.y);
  return a;
}

float dist(Point j, Point h)
{
  float res1, res2;
  float distance,p,q,r;
  res1=h.x-j.x;
  res2=h.y-j.x;
  p=pow(res1,2);
  q=pow(res2,2);
  r=p+q;
  distance=sqrt(r);
  return distance;
}

void output(Point a, Point b,  float distance)
{
  printf("Distance between (%f,%f) and(%f,%f) is %f",a.x, a.y, b.x, b.y, distance);
  
}

int main(void)
{
  Point e, f;
  float g;
  e=intput();
  f=input();
  g=dist(e,f);
  output(e,f,g);
}