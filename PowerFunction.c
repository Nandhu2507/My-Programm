#include<stdio.h>
int val=1;
int main()
{
  int a,b;
  scanf("%d%d",&a,&b);
  power(a,b);
  printf("power value is:%d",val);
  return 0;
}
void power(int a,int b)
{
  int i;
  for (i=0;i<b;i++)
  {
    val=val*a;
  }
}
