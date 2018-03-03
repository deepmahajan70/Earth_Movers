#include<stdio.h>
#include<string.h>
void g(char * s,int len)
{
 char temp=s[0];s[0]=s[len-1];s[len-1]=temp;
 g(s+1, len-2);
}
int main()
{
char s[]="hello";
g(s,strlen(s));
printf("%s",s);
return 0;
}
