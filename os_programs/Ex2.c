//Write a Program which converts all the small case letters in a file into appropriate capital letters.
#include<ctype.h>
#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<signal.h>
#include<time.h>
#include<error.h>
#include<ctype.h>
main(int argc, char *argv[])
{
FILE *fp, *ft;
char ch;
if(argc!=2)
{
fprintf(stderr,"Usage: ./a.out file name");
exit(1);
}
fp=fopen(argv[1],"r");
if(fp==NULL)
{
printf("can't open file");
exit(1);
}
ft=fopen("temp","w");
while(!feof(fp))
{
ch=fgetc(fp);
if(ch>=97&&ch<=122)
ch=ch+'A' - 'a';
fputc(ch,ft);
}
fclose(ft);
fclose(fp);
ft=fopen("temp","r");
fp=fopen(argv[1],"w");
if(ft!=NULL)
{
while(!feof(ft))
{
ch=fgetc(ft);
fputc(ch,fp);
}
}
else
printf("Error in opening file");
}
