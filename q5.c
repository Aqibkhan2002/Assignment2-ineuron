// sum of digits of a 3 digit no
#include<stdio.h>
int main()
{
int n,a,s=0;
printf("Enter a 3 digit no");
scanf("%d",&n);
while(n)
{
a=n%10;
s=s+a;
n=n/10;
}
printf("sum of digits = %d",s);
    return 0;
}