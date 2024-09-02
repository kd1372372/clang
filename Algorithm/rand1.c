#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int kazu;

	srand(time(0)); //乱数を初期化（シャッフル）する
	rand();
	kazu = rand(); //0～32767の範囲で乱数を求める

	printf("発生した乱数は%dです\n",kazu);
}