#include<stdio.h>
int main()
{  int n,r,rev=0,sum=0;
  printf("\n Enter your student id: ");
 scanf("%d",&n);
 function(n);
}
int function(int n)
{  int r,even=0,odd=0;
  for(; n!=0; n=n/10)
    {  r=n%10;

        if(r%2==0)

      { if((r==0))
          continue;

        else
         even=even*10+r;
      }
    else
        odd=odd*10+r;
    }
 printf("\nEven Digits: %d\n",even);
 printf("\nOdd Digits: %d\n",odd);
}

