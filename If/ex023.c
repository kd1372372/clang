#include<stdio.h>
main()
{
	/*int t, h, m;
	h = 0;
	m = 0;

	printf("•b”‚ğ“ü—ÍF");
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
		printf("“ü—ÍƒGƒ‰[");
	}
	printf("%dŠÔ%d•ª%d•b", h, m, t);
	*/
	int s, h, m;
	printf("•b”‚ğ“ü—Í");
	scanf("%d", &s);

	if (s <= 5000) {
		h = s / 3600;
		s = s % 3600;
		m = s / 60;
		s = s % 60;
		printf("%dŠÔ%d•ª%d•b", h, m, s);
	}
	else {
		printf("ƒGƒ‰[");
	}
}