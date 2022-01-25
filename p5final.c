#include<stdio.h>
void input(int *a,int *b,int *c)
{
  printf("enter three numbers:");
  scanf("%d %d %d",a,b,c);
}
void cmp(int a,int b,int c ,int *large)
{
  if(a>b && a>c)
  {
    *large=1;
  }
  else if(b>a  && b>c)
  {
    *large=2;
  }
  else if(c>a && c>b)
  {
    *large=3;
  }
  else if(a==b && b==c)
  {
    *large=4;
  }
  else{
    *large=0;
  }
}
void output(int large)
{
  if(large==1)
  {
    printf("a is greater");
  }
  else if(large==2)
  {
    printf("b is greater");
  }
  else if(large==3)
  {
    printf("c is greater");
  }
  else if(large==4)
  {
    printf("all numbers are equal");
  }
  else{
    printf("invalid");
  }
}
int main()
{
  int a,b,c,large;
  input(&a,&b,&c);
  cmp(a,b,c,&large);
  output(large);
  return 0;
}