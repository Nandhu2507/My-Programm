#include<stdio.h>
int rem;
int count=0;
int main()
  {
    int a,b;
    printf("Enter a value for Numerator:");
    scanf("%d",&a);
    printf("Enter a value for Denominator");
    scanf("%d",&b);
    div(a,b);
    printf("\nDivision is:%d",count);
    printf("\nreminder is:%d",rem);
  }
  void div(int a ,int b )
  {
    rem=a;
    while(rem>=b)
      {
        rem=rem-b;
        count++;
      }
  }
