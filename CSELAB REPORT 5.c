

/*

#include<stdio.h>
int main()
{
    int num,a[100],i,x,y;
    float sum,mean,med,avg,p,sdev;
    printf("\n Enter how many numbers you want: ");
    scanf("%d",&num);
    printf("\n");
    sum=0;
    for(i=1; i<=num; i++)
    { printf("Enter the number: ");
      scanf("%d",&a[i]);
      sum=sum+a[i];
    }
    mean=sum/num;
    printf("\n The mean value is %.2f\n",mean);

   if(num%2!=0)
    { x=(num+1)/2;
      printf("\n Median= %d\n",a[x]);
    }
    if(num%2==0)
       { x=num/2;
         y=x+1;
         med=(a[x]+a[y])/2.0;
         printf("\n Median= %.2f\n",med);
       }
       sum=0;
        for(i=1; i<=num; i++)
        { p=a[i]-mean;
          p=(p*p);
          sum=sum+p;
        }
        avg=sum/num;
        sdev=sqrt(avg);
        printf("\n Standard Deviation= %.2f\n",sdev);
 return 0;
}
*/


#include<stdio.h>
int main()
{
  int r, c, a[10][10], transpose[10][10],j,i;
  printf("\n Enter the number of rows:");
  scanf("%d", &r);
  printf(" Enter the number of columns:");
  scanf("%d",&c);

  printf("\n Matrix Elements:\n");
  for(i=0; i<r; i++)
  {
    for(j=0; j<c; j++)
    {
      printf(" Enter matrix elements a%d%d: ", i + 1, j + 1);
      scanf("%d",&a[i][j]);
    }
  }
  printf("\n Matrix:\n\n");
  for(i=0; i<r; i++)
  {
    for(j=0; j<c; j++)
    {
      printf(" %d  ", a[i][j]);
    }
    printf("\n");
  }
     for(i=0; i<r; i++)
     { for(j=0; j<c; j++)
        {
          transpose[j][i] = a[i][j];
        }
     }
  printf("\n Transpose of the matrix:\n\n");
  for(i=0; i<c; i++)
     {
       for(j=0; j<r; j++)
        {
            printf(" %d  ", transpose[i][j]);
        }
        printf("\n");
     }
return 0;
}

/*
#include <stdio.h>
int main()
{  int num,a[100],fri[100],i,x,c;
    printf("\n Enter the number of array size: ");
    scanf("%d",&num);
    printf("\n");

    for(i=0; i<num; i++)
    { fri[i]=1;
      printf("Enter a elements of array: ");
      scanf("%d",&a[i]);}
    for(i=0;i<num; i++)
    { c=1;
      for(x=i+1; x<num; x++)
       { if(a[i]==a[x])
         { c++;
           fri[x]=0;}
        if(fri[i]!=0)
        fri[i]=c;}
    }
   for(i=0;i<num; i++)
 {  if(fri[i]!=0)
    printf("\n The friquency of  %d  is = %d " ,a[i],fri[i]);}
   printf("\n");
 return 0;
}*/

/*
#include<stdio.h>
int main()
{
    int num,a[100],b[100],i,x=0;
    printf("\n Enter how many numbers you want:");
    scanf("%d",&num);
    printf("\n");
    for(i=0;i<num;i++)
    {
        printf("Enter %d position's number:",i+1);
        scanf("%d",&a[i]);

    }
    for(i=0;i<num;i++)
    {   int  b=a[i],rem=0,x=0,q=1;
        for(;b!=0;b=b/2)
        { rem=b%2;
          x=rem*q+x;
          q=q*10;
        }
    printf("\n %d's binary is = %d\n",a[i],x);}
    return 0;
    }
*/
