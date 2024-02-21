/*#include<stdio.h>
int main()
{
    int n,c=0,i;
    printf("Enter a number:");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        if(n%i==0)
    {
        c++;
    }}
    if(c<=2)
        printf("%d is prime number",n);
    else
        printf("%d is not prime number",n);

    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int num,x=0,y=1,z,i;
    z=x+y;
    printf("Enter the number of term:");
    scanf("%d",&num);
    printf("Fibonacci series:%d+%d+%d",x,y,y);
    for(i=1; i<=num; i++)
    {
        x=y;
        y=z;
        z=x+y;
        if(z>num)
        {
          break;
        }
        printf("+%d",z);
    }
    return 0;
}
*/


#include<stdio.h>
int main()
{
    int num, x, y, z, s=1;
    printf("\nEnter the number of rows:");
    scanf("%d",&num);
    for(x=0; x<num; x++)
    {
        for(y=0; y<num-x; y++)
        printf("  ");
         for(z=0; z<=x; z++)
            {
                if(z==0 || x==0)
                    s=1;
                else
                 s=s*(x-z+1)/z;
                 printf("%4d",s);
            }
        printf("\n");
 }
    return 0;
}




















































