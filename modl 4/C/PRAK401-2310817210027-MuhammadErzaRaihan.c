#include <stdio.h>

int main() 
{
 int e,z;
 char a ;

 scanf("%d %c", &e, &a);

 for(z = 1; z<=50; z++)
 {
  if(z % e == 0)
  {
    printf("%c ", a);
  }
  else
  {
    printf("%d ", z);
  }
 }
  return 0;
}
