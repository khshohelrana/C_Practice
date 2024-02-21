/*#include<stdio.h>
int main()
{int a[10];
printf("%d",sizeof (a));
}
*/
/*
#include<stdio.h>

#define initial_balance 100.0
int main()
{
    int i, low_rate, num_years, year;
    double value[5];

    printf("Enter the interest rate: ");
    scanf("%d", &low_rate);
    printf("Enter the number of years: ");
    scanf("%d", &num_years);

    printf("\n  years");
    for(i=0; i<5; i++)
    {
        printf("%6d%%",low_rate+i);
        value[i]=initial_balance;
    }
    printf("\n");
    for(year=1; year<=num_years; year++)
    {
        printf("%3d      ",year);
        for(i=0; i<5; i++)
        {
           value[i]=value[i]+(low_rate+i)/100.0*value[i];
           printf("%7.2f",value[i]);
        }
     printf("\n");
    }

    return 0;
}
*/


