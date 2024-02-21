#include<stdio.h>

struct sadikur{
    char name[50];
    int id;
    char phone[100];
}s;
int main()
{
    printf("Enter Your Name: ");
    gets(s.name);
    printf("Enter Your ID: ");
    scanf("%d",&s.id);
    printf("Enter Your phone: ");
    scanf("%s",s.phone);
    printf("\nName: %s",s.name);
    printf("\nID: %d",s.id);
    printf("\nPhone: %s",s.phone);
}

/*#include<stdio.h>
struct sadikur{
 float r;
 float ans;
}s;
int main()
{
    printf("Enter radius: ");
    scanf("%f",&s.r);
    s.ans=3.1416*pow(s.r,2);
    printf("Area of the circle is = %.2f",s.ans);
}*/
