#include<stdio.h>
int main()
{
int a=3;
int *p;
p=&a;

printf("\n%u",*p);  //3
printf("\n%u",++*p); //addr remains, value increased to 4
printf("\n%u",p);  //addr
printf("\n%u",*p++); //value remains 4, addr is increased
//printf("\n%u",p);//
return 0;
}
