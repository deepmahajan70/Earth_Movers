#include<stdio.h>
int main()
{
 float a=7.32345;
 float *b,*c;
 b=&a;
 c=b;
 printf("%f %f %f", &a,b,c);
 printf("\n%f %f %f %f",a,*(&a),*b,*c);
 return 0;
}
