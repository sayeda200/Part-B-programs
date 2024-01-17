#include<stdio.h>
int main()
{
int n,m,c,d,first[10][10],second[10][10],sum[10][10],diff[10][10];
printf("\n enter the number of rows and columns of first matrix\n\n");
scanf("%d%d",&m,&n);
printf("\n enter the %d elements of the first amatrix\n\n",m*n);
for(c=0;c<m;c++)
for(d=0;d<n;d++)
scanf("%d",&first[c][d]);
printf("\n enter the %d elements of the second matrix\n\n",m*n);
for(c=0;c<m;c++)
for(d=0;d<n;d++)
scanf("%d",&second[c][d]);
printf("\n\n the first matrix is:\n\n");
for(c=0;c<m;c++)
{
for(d=0;d<n;d++)
{
printf("%d\t",first[c][d]);
}
printf("\n");
}
printf("\n\n the seconnd matrix is:\n\n");
for(c=0;c<m;c++)
{
for(d=0;d<n;d++)
{
printf("%d\t",second[c][d]);
}
printf("\n");
}
for(c=0;c<m;c++)
for(d=0;d<n;d++);
sum[c][d]=first[c][d]+second[c][d];
printf("\n\n the sum of two entered matrices is:\n\n");
for(c=0;c<m;c++)
{
for(d=0;d<n;d++)
{
printf("%d\t",sum[c][d]);
}
printf("\n");
}
for(c=0;c<m;c++)
for(d=0;d<n;d++);
diff[c][d]=first[c][d]-second[c][d];
printf("\n\n the diff of two entered matrices is:\n\n");
for(c=0;c<m;c++)
{
for(d=0;d<n;d++)
{
printf("%d\t",diff[c][d]);
}
printf("\n");
}
return 0;
}
