#include<stdio.h>

//関数プロトタイプ宣言
int add(int a, int b);

main()
{
	int a, b, kotae;
	printf("整数を2つ入力");
	scanf("%d%d", &a, &b);

	kotae = add(a, b);

	printf("合計は%dです\n", kotae);
}

//関数addの記述
int add(int a, int b)
{
	int ans;
	ans = a + b;
	return(ans); //  return a+b;前3行書かずにこの1文だけでもいい
}