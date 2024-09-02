#include<stdio.h>
void get_maxmin(int d1, int d2, int d3, int* max, int* min);

main()
{
	int d1, d2, d3, max, min;
	
	printf("整数を3つ入力：");
	scanf("%d%d%d", &d1, &d2, &d3);

	get_maxmin(d1, d2, d3, &max, &min);

	printf("最大値＝%d 最小値＝%d", max, min);
}

void get_maxmin(int d1, int d2, int d3, int* max, int* min)
{
	//条件演算子(?:)を使用
	//条件演算子は「補助資料：C言語11「制御文（順次・選択・繰返し）」.pdf」を参照
	*max = (d1 > d2) ? (d1 > d3 ? d1 : d3) : (d2 > d3 ? d2 : d3);
	*min = (d1 < d2) ? (d1 < d3 ? d1 : d3) : (d2 < d3 ? d2 : d3);
}