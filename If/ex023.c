#include<stdio.h>
main()
{
	/*int t, h, m;
	h = 0;
	m = 0;

	printf("秒数を入力：");
	scanf("%d",&t);

	if (t <= 5000) {
		if (t > 3600) {
			h += 1;
			t = t - 3600;
			if (t > 60) {
				m = t / 60;
				t = t - (m * 60);
			}
		}
	}
	else {
		printf("入力エラー");
	}
	printf("%d時間%d分%d秒", h, m, t);
	*/
	int s, h, m;
	printf("秒数を入力");
	scanf("%d", &s);

	if (s <= 5000) {
		h = s / 3600;
		s = s % 3600;
		m = s / 60;
		s = s % 60;
		printf("%d時間%d分%d秒", h, m, s);
	}
	else {
		printf("エラー");
	}
}