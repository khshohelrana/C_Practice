#include<stdio.h>
/*struct student{;
char name[40];
int age;
};
int main()
{
    struct student s1, s2;
    strcpy(s1.name,"shohel");

  s1.age=21;
  printf("%s", s1.name);
  printf("\n%d", s1.age);



    return 0;*/
    struct student {
char name[20];
int roll;
char remarks;
float marks;
};
void main() {
struct student s1={"name", 4};

printf("Name=%s", s1.name);
printf("\n Roll=%d", s1.roll);

printf("\n Remarks=%c", s1.remarks);

printf("\n Marks=%f", s1.marks);

getch();
}
