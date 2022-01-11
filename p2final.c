#include<stdio.h>
int input()
{
  int a;
printf("enter a number\n");
scanf("%d" ,&a);
return a;
}
int sum(int x, int y)
{int z;
z=x+y;
return z;
}
void output(int x, int y,int z)
{
  printf("%d + %d = %d\n", x, y, z);
  }
int main()
{
  int x,y,z;
  x=input();
  y=input();
  z=sum(x,y);
  output (x,y,z);
  return 0;
}