//even odd using bitwise operator
#include<stdio.h>
int main()
{
int n;
printf("Enter the number");
scanf("%d",&n);
n&1?printf("odd"):printf("even");

    return 0;
}