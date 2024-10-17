#include<stdio.h>

int main()
{ int a,b,sum;
  printf("Enter first integer(a)");
  scanf("%d",&a);
  
  
  printf("Enter second integer(b)");
  scanf("%d",&b);
  
  sum = a+b;
  printf("The sum of %d and %d is:%d\n",a,b,sum);
  
  return 0;
  }