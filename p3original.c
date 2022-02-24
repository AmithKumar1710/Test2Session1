#include <stdio.h>
int main()
{
  int i,num,isPrime;
  isPrime=1;
  printf("Enter the number to check\n");
  scanf("%d",&num);
  for(i=2;i<=num/2;i++)
    {
      if(num%i==0)
      {
        isPrime=0;
        break;
      }
    }
  if(isPrime==1&&num>1)
  {
    printf("%d is prime number\n",num);
  }
  else
  {
    printf("%d is a composite number\n",num);
  }
  return 0;
}