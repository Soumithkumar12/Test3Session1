#include <stdio.h>
#include <math.h>
int input()
{
  int n;
  printf("enter the number\n");
  scanf("%d",&n);
  return n;
}
int is_composite(int n)
{
for(int i=2;i<n/2;i++)
  {
    if(n%i==0)
    {
      return 1;
      break;
    }
    else
    {
      continue;
    }
    }
  }
void output(int n,int result)
{
  if(result==1)
  {
    printf("%d is composite",n);
  }
  else
  {
    printf("%dis not composite",n);
    
  }
}
int main()
{
  int n,result;
  n=input_number();
  result=is_composite(n);
  output(n,result);
  return 0;
}