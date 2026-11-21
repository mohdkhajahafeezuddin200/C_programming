#include<stdio.h>
void main()
{
  int a = 2,b = 5;
  printf("After Swapping a = %d & b = %d\n",a,b);
  // without using 3rd variable
  a = a+b;
  b = a - b;
  a = a - b;
  printf("After Swapping a = %d & b = %d\n",a,b);

  // with 3rd variable
  int c = a;
  a = b;
  b = c;
  printf("After Swapping a = %d & b = %d\n",a,b);
}
