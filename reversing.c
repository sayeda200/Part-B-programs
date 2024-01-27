#include<stdio.h>
#include<string.h>
int main()
{
	char s1[10],s2[10];
	int x,i,j=0;
	printf("enter the string\n");
	scanf("%s",s1);
	x=strlen(s1);
	for(i=x-1;i>=0;i--)
	{
		if(j>=x-1)
		{
			s2[j]=s1[i];
	}
	j++;
}
s2[j]='\0';
printf("reverse=%s",s2);
}
	
