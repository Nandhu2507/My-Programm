#include<stdio.h>
int main()
{
  long int Input;
  printf("Input:");
  scanf("%ld",&Input);
    if(Input>0 && Input <100000)
      {
       printf("Output:\nPositive");
       }
    else if(Input==0)  
      {
      printf("Output:\nZero");
      }
    else 
    {
      printf("Invalid Input");
    }
  return 0;
}
