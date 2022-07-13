// rotate digits of 3 digit no to right by 1 position
#include<stdio.h>
int main()
{
int n,s,restore;
printf("Enter a 3 digit number");
scanf("%d",&n);
s=n%10;
restore=n/10;
restore=restore%10;
n=n/100;
n=(((s*10)+n)*10)+restore;
printf("number after rotating by 1 position = %d",n);
    return 0;
}