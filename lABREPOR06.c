/*
#include <stdio.h>
int main()
{
    char str[1000];
    int alphabets=0, digits=0, others=0, i;

    printf("\n Enter any string : ");
    gets(str);
    for(i=0; str[i]!='\0'; i++)
    { if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        { alphabets++;
        }
        else if(str[i]>='0' && str[i]<='9')
        { digits++;
        }
        else {others++; }

    }
    printf("Alphabets = %d\n", alphabets);
    printf("Digits = %d\n", digits);
    printf("Special characters = %d", others);

    return 0;
}
*/
 /*
 #include<stdio.h>
int main()
{  char str[100],c;

	printf("\n Enter any string: ");
	gets(str);
    printf("\n Input replace character: ");
	scanf("%c",&c);
	printf("\n After replacing the space with %c the new string is :",c);
  for(int i=0; str[i]!='\0'; i++)
    {

        if(str[i]==' ')
		{
		    str[i]=c;
        }
     }
	puts(str);
	return 0;
}
*/

#include <stdio.h>
 int main()
{ char inputS[100], subS[100];
int sposition, length, c=0;
printf("Enter any string: ");
gets(inputS);
printf("Enter start position:  " );
scanf("%d",&sposition);
printf("Enter substring length: ");
scanf("%d",&length);
 for(; c<length; c++ )
 {
     subS[c]=inputS[sposition]+c-1;


 }
   subS[c]='\0';
   printf("%s",subS);
   return 0;
}














