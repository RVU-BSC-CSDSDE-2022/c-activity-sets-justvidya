//Write a C program to find the sum of 2 complex numbers
#include <stdio.h>

struct _complex
{
	float real;
	float imag;
};
typedef struct _complex Complex;

Complex input_complex()
{
  Complex temp;               // for stuct
  printf("Enter real part:");
  scanf("%f",&temp.real);
  printf("Enter imaginary part:");
  scanf("%f",&temp.imag);     // temp. for structures
  return temp;
}

Complex add_complex(Complex a, Complex b)
{
  Complex temp1;
   temp1.real =a.real + b.real;
    temp1.imag = a.imag + b.imag;
    return (temp1);
}
void output(Complex a, Complex b, Complex sum)
{
  printf("The sum of %.2f+%.2fi and %.2f+%.2fi is %.2f+%.2fi\n",a.real,a.imag,b.real,b.imag,sum.real,sum.imag);
//The sum of 2+3i and 4+5i is 6+8i

}

int main(void)
{
  Complex a,b, sum;
  a= input_complex();
  b= input_complex();
  sum= add_complex(a,b);
  output( a,  b,  sum);
}
