
#include<stdio.h>
#include<string.h>
int main()
{
char a[10],i;
int c,d;
printf("Enter the numbers:");
scanf("%d",&a);
for(i=1;i<=7;i++)
{
 if(a[5]==5&&a[6]==6&&a[7]==7)
    strrev(a[i]);
    c=strrev(a[i]);
    d=a[i]+c;
    }
    printf("Enter the reverse digits:");
    return 0;
    }
