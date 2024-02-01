#include<stdio.h>
#include<string.h>
int main()
{
	char str1[]="Hello,";
	char str2[]="world!";
	char result[50];
	printf("1.string length:\n");
	printf("length of str1 is%d\n",strlen(str1));
	printf("length of str2 is%d\n\n",strlen(str2));
	printf("2.string copy:\n\n");
	strcpy(result,str1);
	printf("result after copying str1 is %s\n\n",result);
	printf("string concatenating:\n");
	strcat(result,str2);
	printf("result after copying str2 is %s\n\n",result);
	return 0;
}
	
	
	
