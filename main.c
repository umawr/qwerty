#include<stdio.h>
extern int a;
extern int b;
int main()
{
  printf("%d\n", a + b);
}