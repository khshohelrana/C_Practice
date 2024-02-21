/*#include<stdio.h>
int main()
{
    int fisrtdigit,lastdigit,sum,num,i;
    printf("\nEnter any number:");
    scanf("%d",&num);
    for(i=num; i!=0; i=i/10)       // initialization, condition, counter.
    {
        fisrtdigit=i%10;            // formula for first digit.
    }
    lastdigit=num%10;               //formula for last digit.
    sum=fisrtdigit+lastdigit;
    printf("Sum of first and last digit of any number is %d\n",sum);
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int lastdigit,lastdigit2,num, x,y,z,rem=0, rem2,rem3=0;
    printf("\nEnter any number:");
    scanf("%d",&num);
    lastdigit=num%10;           //Formula for last digit.
    y=num/10;
    for(; y!=0; y=y/10)
    {
     x=y%10;
     rem=rem*10+x;
    }
    lastdigit2=rem%10;          //After using loop,Formula for first digit.
    z=rem/10;
    for(; z!=0; z=z/10)
    {
        rem2=z%10;
        rem3=rem3*10+rem2;
    }
    printf("\nFirst digit:%d\n",lastdigit2);
    printf("Last digit:%d\n",lastdigit);
    printf("Swapping first and last digit of any number:%d%d%d\n",lastdigit,rem3,lastdigit2);
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int num,x, product=1,i;
    printf("\nEnter any number:");
    scanf("%d",&num);
    if(num<0) num=num*(-1);
    for(i=num; num>0;  num=num/10)   //initialization,condition,counter.
    {
      x=num%10;
      product=product*x;            // after using loop, formula for product.
    }
    printf("\nProduct of digits:%d\n",product);

    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int num, series=0, sum=0,i;
    printf("\nEnter the number of the series:");
    scanf("%d", &num);
    for(i=0; i<num; i++)
    {
        series=series*10+1;         //formula to find series.
        sum=sum+series;

    }
    printf("\n%d is the sum of the series\n", sum);
    return 0;
}
*/





























