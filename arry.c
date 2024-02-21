/*#include<stdio.h>
int main()
{
    int a[10], i;

    for(i=0; i<5; i++)
    {   printf("Enter a number:");
        scanf("%d", &a[i]);
    }
    for(i=5-1; i>=0; i--)
    {
      printf("reverse value is %d\n",  a[i]);
    }

 return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int a[20],b,c,i,n; float sum=0, avg;
    printf("\nEnter any number:");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("Enter a number:");
        scanf("%d",&a[i]);
    }
     for(i=0; i<n; i++)
    {

     sum=sum+a[i];
    }
    avg=sum/n;
    printf("%f is the avg of number:%d\n",avg,n);
}
*/

/*#include<stdio.h>
int main()
{
    int a[10], n,i;
         printf("Enter arry size:");
        scanf("%d", &n);
    for(i=0; i<n; i++)
    {   printf("Enter a number:");
        scanf("%d", &a[i]);
    }
    int large=a[0];
    for(i=0; i<=n; i++)
    {
        if(a[i]>large)
            large=a[i];

    }
printf("large number %d\n",  large);
 return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int a[100], i,n, min;
    printf("Enter arry size number: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("Enter a number: ");
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0; i<n; i++)
    {
        if(a[i]<min)
            min=a[i];
    }
    printf("min number %d\n", min);
 return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int a[100],n, i, x, min, max;
    printf("Enter arry size number: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("Enter a number:");
        scanf("%d",&a[i]);
    }
    min=a[0];
    max=a[0];
    for(i=0; i<n; i++)
    {
        if(max<a[i])
            max=a[i];
        if(min>a[i])
            min=a[i];
    }
    printf("max number is %d",max);
    printf("\nmin number is %d",min);
    return 0;
}
*/
// matrix sum.
/*#include<stdio.h>
int main()
{
  int a[100][100], b[100][100], r,c,j,i, sum[100][100];
  printf("Enter row number: ");
  scanf("%d",&r);
  printf("Enter column number: ");
  scanf("%d",&c);
  for(i=0; i<r; i++)
  {
    for(j=0; j<c; j++)
    {
        scanf("%d",&a[i][j]);
    }
  }
  for(i=0; i<r; i++)
  {
    for(j=0; j<c; j++)
    {
        scanf("%d",&b[i][j]);
    }
  }
  for(i=0; i<r; i++)
  {
    for(j=0; j<c; j++)
    {
        sum[i][j]=a[i][j]+b[i][j];
    }
  }
  for(i=0; i<r; i++)
  {
    for(j=0; j<c; j++)
    {
       printf("%d ",sum[i][j]);
    }
    printf("\n");
  }

  return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int a[10]={0},n,x,y,z,i,rem;
    printf("Enter arry size: ");
    scanf("%d",&x);
    printf("Enter any number: ");
    scanf("%d",&n);
    for(n=n; n!=0; n=n/10)
    {
         rem=n%10;
        a[rem]++;
    }
    for(i=0; i<x; i++)
    {
        if(a[i]>1)
        {printf("%d seen %d times\n",i,a[i]);}
    }

    return 0;
}
*/
//repeted or not
/*#include<stdio.h>
int main()
{
    int a[10]={0},n,i,x,y,rem,c;
    c=0;
    printf("Enter arry size: ");
    scanf("%d",&n);
    printf("Enter any number: ");
    scanf("%d",&x);
    for(; x!=0; x=x/10)
    {
        rem=x%10;
        a[rem]++;
    }
   for(i=0; i<n; i++)
    {
        if(a[i]>1)
        {
            printf("Number is repeted");
            c++;
        }

    }
    if(c==0)
        printf("Number is not repeted");
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int a[10]={0}, n ,i,x,z,rem;
    printf("Enter any number:");
    scanf("%d",&n);
    for(n=n; n!=0; n=n/10)
    {
        rem=n%10;
        a[rem]++;
    }
    for(i=0; i<10; i++)
    {   if(a[i]>1)

        {printf("%d is repeted\n",i);
       }

    }
    for(i=0; i<1; i++)
    {   if(a[n]<1)

        {printf("number has no repeted element\n");
        }
    }

    return 0;
}

*/




































































































