/*#include<stdio.h>
int main()
{
    int x,a =1, b =2, c =3, d = 4;
     x = ++b / c + a * d++;
    printf("%d\n",x);
    return 0;
}

#include<stdio.h>
int main()
{  int x,y;
y = 0 >= 1;x = !y;
 printf("%d\n",x);
return 0;
}
*/
/*
#include<stdio.h>
int main()
{ int n,m;
printf("\nEnter two digit:");
  scanf(" %d%d",&n,&m);
  if(n>0)
  {if(n-m<0)
      printf("A");

      else if(n<=13)
      printf("A");
  }
  else printf("C");
  return 0;
  }
*/

#include<stdio.h>

int main()
{
    int num,r,rev=0,x,digit,y,sum=0;
    printf("enter the id:");
    scanf("%d",&num);
   digit=(int)log10(num);
    for(;num!=0;num=num/10)
    {r=num%10;
    rev=rev*10+r;
    }
    digit=digit-(int)log10(rev);
    for(;rev!=0;rev=rev/10)
    {
    y=rev%10;
    sum=sum+y;
    switch(rev%10)
        {
    case 1:
    {
printf("one ");
    }
    break;
case 2:
        printf("two ");

    break;
        case 3:
    printf("three ");

                break;
        case 4:

            printf("four ");

                break;
            case 5:

            printf("five ");

            break;
                case 6:

                    printf("six ");

                break;
                case 7:

                printf("seven ");

                break;
            case 8:

                            printf("eight ");

                        break;
                       case 9:

                            printf("nine ");

                        break;
                        default:
                        {
                          printf("zero ");
                        }

                        }}
printf("\nThe summation of digits:%d",sum);
    return 0;
}





























