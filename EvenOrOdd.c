#include<stdio.h>
void main()
{
  int n;
  printf("Enter a Number: ");
  scanf("%d",&n);
  // using ternary operator
  n %2==0 ? printf("Even number") : printf("Odd nuber");
}
