#include <stdio.h>

int main () {
  int *p;
  int *fun();
  p=fun();
  printf("\n%d",p);
  printf("\n%d",*p);
  return 0;
}

int *fun()
    {
    static int a=20;
    return(&a);
    }

