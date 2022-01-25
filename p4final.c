#include<stdio.h>
int input()
{
  int a,b,c;
  printf("Enter a number\n");
  scanf("%d",&a);
  return a;
}
int cmp(int a,int b,int c)
{
  if(a>b && a>c)
{
  return 1;
}
else if(b>a && b>c)
{
  return 2;
}
else if(c>a && c>b)
{
  return 3;
}
else if(a==b && b==c)
{
  return 4;
}
else
{
  return 0;
}
}
void output(int result)
{
  if(result==1)
  {
    printf("a is greater");
  }
  else if(result==2)
  {
    printf("b is greater");
  }
  else if(result==3)
  {
    printf("c is greater");
  }
  else if(result==4)
  {
    printf("all numbers are equal");
  }
  else
  {
    printf("invalid");
  } 
}
int main()
{
  int a,b,c,result;
  a=input();
  b=input();
  c=input();
  result=cmp(a,b,c);
  output(result);
  return 0;
}

