#include<stdio.h>
int main()
{
  long int Input;
  scanf("%ld",&Input);
  if (Input>=0 && Input <100000)
  {
    if (Input%2==0 || Input==0)
    {
      printf("Output:\nEven");
    }
    else
    {
      printf("Output:\nOdd");
    }
  }
  else
  {
    printf("Invalid Input");
  }
  return 0;
}
