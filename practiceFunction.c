/*
#include<stdio.h>
int main()
{   int a,b,x;
   printf("Enter a number:");
   scanf("%d",&a);
   printf("Enter a number:");
   scanf("%d",&b);


    x=functionSum(a,b);
     printf("%d",x);



}
 int functionSum(int x, int y)
 { int sum;

sum=x+y;

 return sum;

 }
*/
/*
#include<stdio.h>
int main()
{   int a,b,x;
   printf("Enter a number:");
   scanf("%d",&a);

    x=functionSum(a);
    printf("%d",x);

    return 0;
}
 int functionSum(int x)
 { int fact=1,i;

    for(i=1; i<=x; i++)
   {
       fact=fact*i;
   }

 return fact;
}
*/

#include<stdio.h>
int main()
{   int a,b,x;
   printf("Enter a number:");
   scanf("%d",&a);

    x=functionSum(a);

}
 int functionSum(int x)
 { int sum=0,i;

    for(i=1; i<x; i++)
   {  if(x%i==0)
       sum=sum+i;

   }
   if(sum==x)

    printf("perfect number");
   else
    printf("not perfect number");
}

/*
#include<stdio.h>
int main()
{   int a,b,x;
   printf("Enter a number:");
   scanf("%d",&a);

    int y=functionSum(a);
  printf("%d",y)  ;
}
 int functionSum(int x)
{


     if(x==0)
        {return 1;}
   else
   {
       int y=x*functionSum(x-1);

       return y;
   }


}
*/

