/*#include<stdio.h>
struct person
{
    int length, breadth;
};struct person variable;
int main()
{
    printf("Enter lentgh:");
    scanf("%d",&variable.length);
    printf("Enter breadth:");
    scanf("%d",&variable.breadth);
    printf("%d",variable.length*variable.breadth);
    return 0;
}
*/

#include<stdio.h>
struct student
{
    char name[100];
    int id;
    char phoneNm[100];
    struct BDateE{
      char BDate[100];


    }s;




}; struct student first;
int main()
{
    printf("\n Enter your Name:");
    //
    gets(first.name);

    printf("\n Enter your Student ID:");
    scanf("%d",&first.id);
    printf("Enter Bdate:");
    //fgets(first.BDate, sizeof(first.BDate), stdin);
    scanf("%s", first.s.BDate);
    printf("\n Enter your phone number:");
    scanf("%s",&first.phoneNm);




    printf("\n\n\t%s\t\t\t%d\t\t\t%s\n%s",first.name,first.id,first.phoneNm, first.s.BDate);
    return 0;
}
/*
#include<stdio.h>
struct circle
{
    float r, area;

} s;
int main()
{
    printf("Enter Radius value:");
    scanf("%f",&s.r);
    s.area= (3.1416*s.r*s.r);
    printf(" \nArea of circle:%.4f", s.area);
    return 0;
}
*/











































