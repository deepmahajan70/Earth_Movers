#include<stdio.h>
int main()
{
 int a[][5]={1,2,3,4,5,6,7,8,9,10};
 int *p;
 p=(int *)a;
 int (*q)[5];
 q=a;
 printf("\n%u %u",p,q);
 p++;
 q++;
 printf("\n%u %u\n",p,q);
 return 0;
}
