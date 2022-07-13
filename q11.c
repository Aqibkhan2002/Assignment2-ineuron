#include<stdio.h>
int main()
{
int n,d;
printf("Enter the number and digit");
scanf("%d%d",&n,&d);
n=(n*10)+d;
printf("new digit = %d",n);
    return 0;
}