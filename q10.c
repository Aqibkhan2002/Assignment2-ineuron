// make last digit 0
#include<stdio.h>
int main()
{
int n;
printf("Enter the number");
scanf("%d",&n);
n=n/10;
n=n*10;
printf("number after making last digit 0 = %d",n);
    return 0;
}