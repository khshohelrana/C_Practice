/*#include<stdio.h> // sum any digit
int main()
{
    int sum, rem, x,total;
    scanf("%d", &x);
    total=0;
   for(; x!=0;  x=x/10)
    {
       rem=x%10;

        total=total+rem;
 }
     printf("%d", total);

    return 0;
}
*/

/*#include<stdio.h>  //frequency
int main()
{
 int count,rem, number,d;

 scanf("%d%d", &number,&d);

 for(count=0; number!=0; number=number/10)
 {
   rem=number%10;
   if(rem==d)
   {
       count=count+1 ;
   }
 }

 printf ("%d",count);

 return 0;



}
*/

/*#include<stdio.h>  // even or odd number
int main()
{
    int i, n, num, ecount, ocount;
    scanf("%d", &n);
    for(i=0 ; i<n ; i++)
    {
        scanf("%d", &num);

        if(num%2==0)
           {
             printf("%d is even number", num);
        ecount++;
           }

    else
    {
        printf("%d is odd number", num);
        ocount++;
    }}
   return 0;
}
*/


/*#include<stdio.h>  // factorial.
int main()
{
    int i, n, fact=1;

    scanf("%d", &n);

    for(i=1 ; i<=n; i++)
    {
        fact= fact*i ;
    }
    printf("%d", fact);
    return 0;
}

*/
/*
#include<stdio.h>     // sum any digit
int main()
{
    int sum, rem, x,total;
    scanf("%d", &x);
    total=0;
   for(i=x; x!=0;  x=x/10)
    {
       rem=x%10;

        total=total+rem;
 }
     printf("%d", total);

    return 0;
}
*/





































