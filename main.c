#include<stdio.h>
#include<math.h>
int main(void)
{
  float a, b, c, D;
  printf("Enter the coeff\n");
  scanf("%f%f%f", &a, &b, &c);
  D = b*b-4*a*c;
  printf("Descriminant is %0.2f\n", D);
  return 0;
}