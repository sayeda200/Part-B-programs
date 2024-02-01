#include<stdio.h>
int sum(); // Function Declaration
int main()
{
int result;
printf("\nGoing to calculate the sum of two numbers:");
result = sum(); // Function call
printf("%d",result);
}
int sum() // Function Definition
{
int a,b;
printf("\nEnter two numbers");
scanf("%d %d",&a,&b);
return a+b;
}
