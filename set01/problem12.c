//to find the sum of n complex numbers
/*#include<stdio.h>
 struct Complex
{
  int realPart,imaginaryPart;
 };
main()
{
 int n,i;
 printf("Enter number of Complex number to be added\n");
 scanf("%d",&n);
 struct Complex c[n],total;
 total.realPart=0;
 total.imaginaryPart=0;
 for(i=0;i<n;i++)
 {
  printf("Enter real part of %d number\n",i+1);
  scanf("%d",&c[i].realPart);
  printf("Enter imaginary part of %d number\n",i+1);
  scanf("%d",&c[i].imaginaryPart);
  total.realPart+=c[i].realPart;
  total.imaginaryPart+=c[i].imaginaryPart;
 }
 
 if(total.imaginaryPart>=0)
     printf("%d+%di\n",total.realPart,total.imaginaryPart);
 else
     printf("%d%di\n",total.realPart,total.imaginaryPart);
 
 
}*/



#include <stdio.h>
struct _complex 
{
	float real,imaginary;
};
typedef struct _complex Complex;

int get_n()
{
  int n;
  printf("Enter total number of complex numbers\n");
  scanf("%d",&n);
  return n;
}

//Complex input_complex()
void input_n_complex(int n, Complex c[n])
{
  printf("Enter %d Complex numbers\n",n);
  for(int i=0; i<n;i++)
    {
      printf("Enter real part of c[%d]\n",i);
      scanf("%f",&c[i].real);
      printf("Enter imaginary part of c[%d]\n",i);
      scanf("%f",&c[i].imaginary);
    }
}


//Complex add(Complex a, Complex b)

Complex add_n_complex(int n, Complex c[n])
{
  Complex temp;
  temp.real=0;
  temp.imaginary=0;
  for(int i=0; i<n; i++)
    {
      temp.real=c[i].real + temp.real;
      temp.imaginary =c[i].imaginary + temp.imaginary;
    }
return temp;
}



void output(int n, Complex c[n], Complex result)
{
  for(int i=0; i<n; i++)
  {
  printf("%f+%fi\t", c[i].real, c[i].imaginary);
  printf("  +  ");
    } 
 printf("%f+%f",result.real,result.imaginary);
}


int main(void)
{
  int size;
  Complex result;
  size = get_n();
  Complex c[size];
  //input_complex();
  input_n_complex(size, c[size]);
  //Complex add(Complex a, Complex b);
  result = add_n_complex(size, c[size]);
  output( size,  c[size], result);
}
//2+3i + 4+5i + 6+7i is 12+15i
