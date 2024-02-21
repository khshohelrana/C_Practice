#include<stdio.h>
int main()
{
    float x,y,i;
    int serialN=0;
    for(y=1; y<=6; y++)
    {
        for(x=5.5; x<=12.5; x=x+0.5)
        {   serialN++;
            i=2+(y+0.5*x);
            printf("%.2d) i=%.2f, \t  y=%.0f, \t  x=%.2f\n", serialN,i,y,x);

        }
       printf("\n");
    }
    return 0;
}


/*#include<stdio.h>
int main()
{ int num,f,i,x;
  float y,sum=0;
printf("\n Enter a number:");
scanf("%d",&num);

for(i=1; i<=num; i++)
{   f=1;
    for(x=1; x<=i; x++)
    {
        f=f*x;
    }
    if(i<num)
        printf("1/%d!+",i);
    else
       printf("1/%d!",i);

    y=(1.0/f);
    sum=sum+y;
}
 printf(" = %.4f\n",sum);
 return 0;
}
*/
