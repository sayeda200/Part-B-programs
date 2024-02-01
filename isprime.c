#include <stdio.h>
int main()
{
int n , res;
printf("Enter the value of n \n");
scanf("%d",&n);
res= isprime(n);
if (res==2)
{
printf("Number is prime \n");
}
else
{
printf("Number is not prime \n");
}
return 0;
}
int isprime(int x)
{
int i=1,count=0;
while(i<=x)
{
if(x%i==0)
{
count++;
}
i++;
}
return count;
}
