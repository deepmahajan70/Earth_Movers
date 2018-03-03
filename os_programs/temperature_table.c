#include<stdio.h>
int main()
{
int fahr,celsius;
int lower=0,upper=300,step=20;
fahr=lower;
system("clear");
printf("%c[%d;%df Temperature Table\n",0x1B,20,20);
printf("Fahr\t\tCelsius\n");
while(fahr<=upper)
     {
      celsius=5*(fahr-32)/9;
      printf("%d\t\t%d\n",fahr,celsius);
      fahr=fahr+step;
     }

return 0;
}
