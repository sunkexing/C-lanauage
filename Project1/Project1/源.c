#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void isLeapyear(int year)//ÅĞ¶ÏÊÇ·ñÎªÈòÄê
{
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
	{
		printf("yes");
	}
	else printf("no");
	
}
int main()
{
	int year = 0;
	scanf("%d", &year);
	isLeapyear(year);
	system("pause");
	return 0;
}