//目的：输入一个字符串，delete space
#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
int delete_space(char *p);
int main()
{   
	char buf[1024];
	printf("Please input string:\n");
	gets_s(buf);
	delete_space(buf);
	puts("After delete space:\n");
	puts("buf");
}
int delete_space(char *p)
{
   
}