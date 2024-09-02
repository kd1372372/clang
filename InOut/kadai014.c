#include<stdio.h>

main()
{
	int  yy, mm, dd;

	printf("西暦を入力：");
	scanf("%d", &yy);
	printf("月を入力：");
	scanf("%d", &mm);
	printf("日を入力：");
	scanf("%d", &dd);

	printf("私は、%d年%d月%d日に生まれました。", yy, mm, dd);

}