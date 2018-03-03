//Write a program to display a file page wise assuming a page has 10 lines and each line has 80 characters
// To display a file page wise
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
char buff[10][80];
int i,j;
char k;
FILE *fp;
if(argc!=2)
{
fprintf(stderr,"Usage: ./a.out file name\n");
exit(1);
}
fp=fopen(argv[1],"r");
while(!feof(fp)){
for(i=0;i<10;i++)
for(j=0;j<80;j++)
buff[i][j]='\0';
for(i=0;i<10;i++)
fgets(buff[i],80,fp);
for(i=0;i<10;i++)
printf("%s",buff[i]);
scanf("%c", &k);
}
fclose(fp);
}
