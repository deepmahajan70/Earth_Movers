#include<stdio.h>
int main()
{
 float *jamboree(float*);
 float p=23.5,*q;
 q=&p;
 printf("q before call %u",q);
 q=jamboree(q);
 printf("\nq after call %u",q);
 return 0;
}

float *jamboree(float *r)
{
 r=r+1;
 return(r);
}
