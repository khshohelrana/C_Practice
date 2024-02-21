/*#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    f(n);
    printf("%d",f(n));

}
int f(int n)
{
    if(n>0)
        return (n+f(n-2));
}
*/
/*
#include<stdio.h>
int function ();
main()
{
    int i;
i=function();
printf("%d",i);
return 0;

}
int function()
{
    int a;
    a=250;
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{   int n;
    printf("\nPress 1 to print nth terms Fibonacci Sequence using recursion\n\nPress 2 to print nth terms Fibonacci Sequence without recursion\n\nEnter option:");
    scanf("%d",&n);
    if(n==1)
    { fun_ur();
    }
    if(n==2)
    {fun_wr();
    }
}
   int fun_ur()
  {
    int n,i;
    printf("\nEnter the nth term:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
     printf("%d ",fibonacci(i));
    }
  }
int fibonacci(int n)
{   int a[n];
    if(n==0)
    {
        return 0;
    }
    if(n==1||n==2)
    {
        return 1;
    }
    else
    {
      return (fibonacci(n-1)+fibonacci(n-2));
    }
}

int fun_wr()
{
    int n,p,i=1,q=0,c;
    printf("\nEnter the nth term:");
    scanf("%d",&n);
    p=q+i;
    printf("\nSeries:%d %d %d ",q,i,i);
    for(c=4; c<=n; c++)
    {   q=i;
        i=p;
        p=q+i;
        printf("%d ",p);

    }
}
*/
/*
#include<stdio.h>
int main()
{
 celsius();
}
int celsius()
{
float f,c;
printf("\nEnter the Farenheit value:");
scanf("%f",&f);
c=((f-32)/9)*5;
printf("\nAnswer is %.2f degree celsius",c);
printf("\n");
}
*/






















