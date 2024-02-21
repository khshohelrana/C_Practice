/*
#include<stdio.h>
int main()
{
float commisionRate, transactionSize;

printf("Enter the value of trade:");
scanf("%f",&transactionSize);
if(transactionSize<2500)
{  commisionRate=30+((transactionSize*1.7)/100);
if(commisionRate<39)
 {


printf("the minimum charge is 39\n");
 }
else{
  commisionRate=30+((transactionSize*1.7)/100);
  printf("commission is %f",commisionRate);

}

}


  else if (2500<=transactionSize && 6250>transactionSize)
{commisionRate=56+((transactionSize*0.66)/100);
printf("commission is %f",commisionRate);}

else if (6250<=transactionSize && 20000>transactionSize)
{commisionRate=76+((transactionSize*0.44)/100);
printf("commission is %f",commisionRate);}

else if (20000<=transactionSize && 50000>transactionSize)
{commisionRate=100+((transactionSize*0.22)/100);
printf("commission is %f",commisionRate);}

else if (50000<=transactionSize && 500000>transactionSize)
{commisionRate=155+((transactionSize*0.11)/100) ;
printf("commission is %f",commisionRate);}

  else if (500000<=transactionSize && 500000<transactionSize)
{commisionRate=255+((transactionSize*0.09)/100) ;
printf("commission is %f",commisionRate);}





return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g;
    printf("enter the number:");
    scanf("%d",&a);
    if (a>=40)

       {
         printf("you pass in the exam");


       {
 if (a>=80)

   printf(" and you got letter mark in the exam");
}
         }

        else
        {
            printf("you fail in the exam");

        }

    return 0;

}
*/
/*
#include<stdio.h>

int main()

{
     float a,b,c,d,e,sum,avg ;
    printf("Enter marks of five subjects:");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);

  sum=(a+b+c+d+e);
   printf("Total marksis=%.2f\n",sum);

    avg=(sum/5);

     printf("Total marksis=%.2f\n", avg);

    return 0 ;
}
*/
/*
#include<stdio.h>
int main()
{
    int num;

   printf("\nEnter a number:");
   scanf("%d",&num);

  if(num%5==0 && num%11==0)
  {
    printf("\n%d is divisible by 5 and 11",num);
  }
 else
  {
   printf("\n%d is not divisible by 5 and 11",num);
  }
  return 0;
}
*/
/*
#include<stdio.h>

int main()
{
   float x,y,z;
   printf("\nEnter three different number:");
   scanf("%f%f%f",&x,&y,&z);

   if(x>y && x>z)
   {
       printf("\n%.2f is maximum number",x);
   }
   else if(y>x && y>z)
   {
       printf("\n%.2f is maximum number",y);
   }
   else
    {
       printf("\n%.2f is maximum number",z);
   }
   return 0;

}
*/
/*
#include<stdio.h>
int main()
{
    char alphabet;
    printf("Enter to take a alphabet:");
    scanf("%c",&alphabet);

    switch(alphabet)
    {
      case'A':
      case'E':
      case'I':
      case'O':
      case'U':
      case'a':
      case'e':
      case'i':
      case'o':
      case'u':
      printf("\n%c is a vowel",alphabet);

        break;
        default:
        printf("\n%c is a consonant",alphabet);
    }
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int y;

    printf("\nEnter a year:");
    scanf("%d",&y);

    if(y%400==0 || y%100!=0 && y%4==0)
     {
    printf("\n%d is a leap year",y);
    }

    else
  {
   printf("\n%d is not a leap year",y);
  }

   return 0;

   }
   */
   /*#include<stdio.h>
int main()
{
    int i, num, sum=0;

printf("enter a value");
scanf("%d",&num);

for(i=1; i<=num; i++)
{
printf("\n%d", i);

    sum=sum+i ;
}
printf("\n%d", sum);

return 0;
}
*/
/*

#include<stdio.h>
int main()
{
   int counter;
   for(counter=10; counter>=1; counter--)
    printf("%d\n", counter);

return 0;
}
*/
/*#include<stdio.h>
int main()
{
    float num1,num2;
    printf("\nEnter two number:");
    scanf("%f%f",&num1,&num2);
    if(num1>num2)
    {
        printf("\nmaximum number is %.2f",num1);
    }
   else
    {
    printf("\nmaximum number is %.2f",num2);
    }
    return 0;
} */

/*#include<stdio.h>
int main()
{
    int number;
    printf("\nEnter a number:");
    scanf("%d",&number);
    if(number>0)
    {
        printf("\nnumber is positive");
    }
    else if(number<0)
    {
        printf("\nnumber is negative");
    }
    else
    {
        printf("\nnumber is zero");
    }
    return 0;
} */

/*#include<stdio.h>
int main()
{
    int number;
    printf("\nEnter a number:");
    scanf("%d",&number);
    if(number%2==0)
    {
        printf("\nnumber is even");
    }
    else
    {
        printf("\nnumber is odd");
    }
    return 0;
}
 */
 /*#incude<stdio.h>
int main()
{
    int a,b,c,d;
    printf("\nEnter four integers:");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b)
}


*/

/*Write a program that finds the largest and smallest of four integers entered by the user:
Enter four integers:*/

/*#include<stdio.h>

int main()
{
    int a,b,c,d;
    printf("\nEnter four integers: ");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    if(a>b&&a>c&&a>d)
    {
        printf("\nLargest: %d\n",a);
        if(b<c&&b<d)
            {printf("\nSmallest: %d\n",b);}
        else if(c<d)
            {printf("\nSmallest: %d\n",c);}
        else
            {printf("\nSmallest: %d\n",d);}

    }
   else if(b>c&&b>d)
    {
        printf("\nLargest: %d\n",b);
        if(a<c&&a<d)
            {printf("\nSmallest: %d\n",a);}
        else if(c<d)
            {printf("\nSmallest: %d\n",c);}
        else
            {printf("\nSmallest: %d\n",d);}

    }

   else if(c>d)
    {
        printf("\nLargest: %d\n",c);
        if(a<b&&a<d)
            {printf("\nSmallest: %d\n",a);}
        else if(b<d)
            {printf("\nSmallest: %d\n",b);}
        else
            {printf("\nSmallest: %d\n",d);}

    }
    else
    {
        printf("\nLargest: %d\n",d);
        if(a<b&&a<c)
            {printf("\nSmallest: %d\n",a);}
        else if(b<c)
            {printf("\nSmallest: %d\n",b);}
        else
            {printf("\nSmallest: %d\n",c);}

    }


    return 0;
}
*/
/*#include<stdio.h>
int main()
{

    int n,counter;
    printf("enter a value of n:");
    scanf("%d",&n);
    printf("number from 1 to n\n");
    counter=1;
    while(counter<=n)
    {
        if(counter%2!=0)

      printf(" %d\n",counter);
 counter++ ;
    }

    return 0;
}  */

/*#include<stdio.h>

int main()
 {
int s , n , count ;

 count=1,
 s=0;
 do
 {  printf("enter numbers:");
scanf( "\n%d",&n) ;
 s=s+n;
 count++;
 }
  while( count <=10) ;
printf( " result= %d" , s );

return 0 ;
 }
*/
/*#include<stdio.h>
int main()
{ int password;
printf("Enter the password:");
scanf("\n%d",&password);

switch(password)
{
    case (2002):
    printf("\nvalid password");
    break;
    default:
      printf("\ninvalid password");
}
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
   char alphabet;
   for(alphabet='a'; alphabet<='z' ; ++alphabet)
    printf("%c\n",alphabet);

    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
   int number;
   printf("%d\n",number);
   for(alphabet='a'; alphabet<='z' ; ++alphabet)
    printf("%c\n",alphabet);

    return 0;
}
*/
/*#include<stdio.h>
int main()
{ int i , num, p=0 ;
scanf("%d", &num);
for(i=1; i<=num; i++)
{
    if(num%i==0)
    {
        p++;
    }
}

if(p==2)
{
    printf("%d is prime", num);

}
else{
    printf("%d in not prime", num);
}

return 0;
}
*/
/*
#include<stdio.h>
int main()
{ int i , num, p=0 ;
scanf("%d", &num);
for(i=2; i<=num; i++)
{
    if(num%i==0)
    {
        p++;
    }
}

if(p==1)
{
    printf("%d is prime", num);

}
else{
    printf("%d in not prime", num);
}

return 0;
}

*/
/*#include<stdio.h>
int main()
{
    int num,x, product=1,i;
    printf("\nEnter any number:");
    scanf("%d",&num);
    for(i=num; num!=0;  num=num/10)   //initialization,condition,counter.
    {
      x=num%10;
      product=product*x;            // after using loop, formula for product.
    }
    printf("\nProduct of digits:%d\n",product);

    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int x, num,i,reverse=0;
    scanf("%d", &num);
    for(i=num; i!=0; i=i/10)
    {
        x=i%10;
        reverse=reverse*10+x;
    }
    if(num==reverse)
       {
         printf("palindrome");
       }
    else
         {printf("not palindrome");}
        return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int num,x,y,z=0,rev=0,i;
    scanf("%d",&num);
    for(i=num; i!=0; i=i/10)
    {
        x=i%10;
        rev=rev*10+x;
    }
    for(; rev!=0; rev=rev/10)
    {
      y=rev%10;
      switch(y)
      {
        case 1:
      printf("one");
      break;
      case 2:
      printf("two");
      break ;
      case 3:
      printf("three");
      break ;
      case 4:
      printf("four");
      break ;
      case 5:
      printf("five");
      break ;
      case 6:
      printf("six");
      break ;
      case 0:
      printf("zero");
      break ;
      default:
        printf("not found");
      }

    }


    return 0;
}
*/
/*#include<stdio.h>
#define true 1
#define false 0
typedef int bool;
int main()
{
    bool digit_seen[10]={false};
    int n,num ,digit;
    printf("Enter any number:");
    scanf("%d",&digit);

    for(n=num; n>0; n=n/10;)
    {
        digit=num%10;
        if(digit_seen[digit])
            break:
        digit_seen[digit]=true;

    }
    if(n>0)
        printf("repeated digit:%d\n". num);
    else
      printf("not repeated digit:%d\n".num);

    return 0;
}
*/



