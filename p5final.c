#include<stdio.h>
int main() {
  int a,b,c;
  printf("enter three numbers\n");
  scanf("%d %d %d",&a,&b,&c);
  if((a>b)&&(a>c))
  printf("a is big\n");
  else if((b>a)&&(b>c))
  printf("b is big\n");
  else
  printf("c is big\n");
  return 0;
}