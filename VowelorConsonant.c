#include<stdio.h>
void main()
{
  char ch;
  printf("Enter alphabet");
  scanf("%c",&ch);
  int n = (int)ch;
  if(n > 65 && n<90 || n>97 && n<120){
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'||
      ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
      printf("Vowel");
    else printf("Consonant");
  }
  else printf("Not a alphabet");
}
