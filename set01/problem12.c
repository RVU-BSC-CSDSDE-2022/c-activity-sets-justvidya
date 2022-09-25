#include <stdio.h>
struct _complex 
{
	float real,imaginary;
};
typedef struct _complex Complex;
int size,n; 
int get_n()
{
  //int n;
  printf("Enter total number of complex numbers\n");
  scanf("%d",&n);
  return n;
}

//Complex input_complex()
void input_n_complex(int n, Complex c[size])
{
  printf("Enter %d Complex numbers\n",n);
  for(int i=0; i<n;i++)
    {
      printf("Enter real and imaginary part of c[%d]\n",i);
      scanf("%f%f",&c[i].real, &c[i].imaginary);
    }
}


//Complex add(Complex a, Complex b)

Complex add_n_complex(int n, Complex c[size])
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


void output(int n, Complex c[size], Complex result)
{
  for(int i=0; i<n; i++)
  {
  printf("%f+%fi\t", c[i].real, c[i].imaginary);
  printf("  +  ");
    } 
 printf("is %f+%fi",result.real,result.imaginary);
}


int main(void)
{
 
  
  Complex result;
  Complex c[10];
  
  size = get_n();

  input_n_complex(size, c);
  result = add_n_complex(size, c);
  output( size,  c, result);
}

