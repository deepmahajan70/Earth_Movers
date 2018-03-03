#include<stdio.h>
#include<signal.h>
#include<stdlib.h>
 void handle(int);

int main()
{
	//void (*ptrToFun)(int);
	//ptrToFun=&handle;
	//ptrToFun(10);
	
	//printf("%u %u",handle,ptrToFun);
	
	signal(SIGINT,handle);
	//sleep(10);
	while(1)
	{
	
	}

	return 0;
}
void handle(int i)
{	
	printf("interrupt catched\n");
	//sleep(10);
	//exit(1);
}
