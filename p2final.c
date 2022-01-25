#include<stdio.h>
int input() { 
int i;
  printf("enter a number\n");
  scanf("%d",&i);
  return i;
}
int add(int a,int b) 
{
  int sum;
  sum=a+b;
  return sum;
}
void output(int a,int b,int sum) 
{
  printf("%d + %d = %d",a,b,sum);
}
int main() 
{
  int a,b,sum;
  a=input();
  b=input();
  sum=add(a,b);
  output(a,b,sum);
  return 0;
}