#include<stdio.h>
#include<stdlib.h>
int main()
{
int m;
printf("Enter the student marks: \n");
scanf("%d",&m);
if(m>90 && m<=100)
printf("O grade\n");
else if(m>80 && m<=90)
printf("A grade\n");
else if(m>70 && m<=80)
printf("B grade\n");
else if(m>60 && m<=70)
printf("C grade\n");
else if(m>50 && m<=60)
printf("D grade\n");
else if(m<50)
printf("F grade\n");
}
