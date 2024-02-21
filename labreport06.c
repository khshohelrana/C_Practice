#include<stdio.h>
int main()
{   system("cls");
    int i;
    printf("\nMENU FOR BASIC ARITHMETIC OPERATIONS\n");
    printf("\n\t(1)add");
    printf("\n\t(2)substract");
    printf("\n\t(3)multiple");
    printf("\n\t(4)divide\n");
    printf("\n\tEnter:");
    scanf("%d",&i);
    if(i==1)
    {
        add();
    }
    if(i==2)
    {
        sub();
    }
  if(i==3)
  {
      mul();
  }
   if(i==4)
   {
       div();
   }
}
int add()
{   system("cls");
    int n,i;
    float x,sum=0;
    printf("\n\tEnter how many numbers would you like to add:");
    scanf("%d",&n);
    printf("\n\tEnter the numbers by separating them with a space::");
    for(i=0;i<n;i++)
    {  scanf("%f",&x);
       sum=sum+x;
    }
    printf("\n\tThe desired result is: %.2f",sum);
    printf("\n\n\tIf you want to return to the main menu(press 0) other wise press anything else :");
    scanf("%d",&i);
    if(i==0)
    {
      main();
    }
}
int sub()
{  system("cls");
   float x,y,s;
   printf("\n\tEnter the two number by separating them with a space:");
   scanf("%f%f",&x,&y);
   s=x-y;
   printf("\n\tThe desired result is: %.2f",s);
   printf("\n\n\tIf you want to return to the main menu(press 0) other wise press anything else :");
    scanf("%d",&x);
    if(x==0)
    {
      main();
    }
}
int mul()
{   system("cls");
    int n,i;
    float x,sum=1;
    printf("\n\tEnter how many numbers would you like to multiple:");
    scanf("%d",&n);
    printf("\n\tEnter the numbers by separating them with a space:");
    for(i=0;i<n;i++)
    {
      scanf("%f",&x);
      sum=sum*x;
    }
    printf("\n\tThe desired result is: %.2f",sum);
    printf("\n\n\tIf you want to return to the main menu(press 0) other wise press anything else :");
    scanf("%d",&i);
    if(i==0)
    {
      main();
    }
}
int div()
{
    system("cls");
    float x,y,div=0;
    printf("\n\tEnter the first number::");
    scanf("%f",&x);
    printf("\n\tEnter the second number::");
    scanf("%f",&y);
    div=x/y;
    printf("\n\tThe desired result is: %.2f",div);
    printf("\n\n\tIf you want to return to the main menu(press 0) other wise press anything else :");
    int i;
    scanf("%d",&i);
    if(i==0)
    {
      main();
    }
}
