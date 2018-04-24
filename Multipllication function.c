#include<stdio.h>
int val=0;
void main()
{
  int a,b;
  printf("Enter the value for a:");
  scanf("%d",&a);
  printf("Enter the value for b:");
  scanf("%d",&b);
  mult(a,b);
  printf("Multiplication value is :%d",val);
}
void mult(int a,int b)
{
  int i=0;
  for (i=0;i<a;i++)
  {
    val=val+b;
  }
}
