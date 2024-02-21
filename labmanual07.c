#include<stdio.h>
int main()
{
    float n;
    printf("\n Enter the decimal number:");
    scanf("%f",&n);
    int p=n, q=n, a[10];
    float s=n-q;
    for(int i=0;i<10;i++)
    {  s=s*2.0;
    int y=s;
       a[i]=y;
       s=s-y;
    }
    int x=function(p);
    printf("\n Equivalent binary value is: %d.",x);

    for(int i=0;i<10;i++)
    {
        printf("%d",a[i]);
    }
}
int function(int p)
{   int a[100],n, i=0,j,rem,y=0;
    n=p;
    for(n=n;n!=0;n=n/2)
    {   rem=n%2;
        a[i]=rem;
        i++;
    }
    for(j=i-1;j>=0;j--)
    {
     y=y*10+a[j];
    }
    return y;
}

