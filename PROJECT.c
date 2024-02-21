//computing the dimensional weight of a box
/*#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,d,required;
float number, l=166.0;
printf("enter the values:");//length,width,height
scanf("%d %d %d", &a,&b,&c);
d=a*b*c;
number=d/l;
required=ceil(number);
printf("the dimensional weight %d",required,number );
return 0;
}
*/
/*
#include<stdio.h>
#define freezing_point (32.0)
#define scale_factor (5.0/9.0)
int main()
{
int far;
float c;
printf("enter the farenheit value:");
scanf("%d",&far);
c=(far-freezing_point)*scale_factor;
printf("answer is %.2f",c);
return 0;
}
*/
/*
#include<stdio.h>

int main()
{
int far;
float c;
printf("enter the farenheit value:");
scanf("%d",&far);
c=((far-32)/9)*5;
printf("answer is %.2f",c);
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

//condition for leap year or not.

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

/*
#include <stdio.h>
int main()
{
 float vol, r, h;
 printf("enter radius:");
 scanf("%f",&r);

 printf("enter height:");
 scanf("%f",&h);

    vol=(22*r*r*h)/7;
printf("vol:%f\n", vol);
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int a, b, c,d,e,g ;
    float f;

    printf("enter the value:");
    scanf("%d %d",&a, &b);

     c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    g=a%b;

    printf("%d\n",c);
    printf("%d\n",d);
    printf("%d\n",e);
    printf("%.0f\n",f);
    printf("%d\n",g);

    return 0 ;
}
*/

/*

#include <stdio.h>
#define pi 3.1416
int main()
{

float r, a, v;
printf("enter the value:");
scanf("%f",&r);

a=pi*r*r;
v=2*pi*r;

printf("%f\n", a);
printf("%f\n", v);
return 0;

}
*/

/*
#include<stdio.h>
int main()
{
    float a, m, kilometer;

    printf("enter the value:");
    scanf("%f",&a);

m= a/100;
kilometer=a/100000;

printf("%f\n",m);
printf("%f",kilometer);
    return 0;

}
*/
/*
#include<stdio.h>
#define freezing_point 32.0
#define scale_factor (5.0/9.0)
int main()
{
    int f;
   float c;
    printf(":");
    scanf("%d", &f);
    c=(f-freezing_point)*scale_factor;
    printf("%.f",c);
    return 0;
}
*/
