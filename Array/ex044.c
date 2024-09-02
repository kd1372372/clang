#include<stdio.h>
main()
{
	char moji1[100], moji2[100], work[100];
	int i;

	printf("•¶š—ñ1‚ğ“ü—ÍF");
	scanf("%s", &moji1[0]);

	printf("•¶š—ñ2‚ğ“ü—ÍF");
	scanf("%s", &moji2[0]);

	printf("moji1=%s", moji1);
	printf("\tmoji2=%s\n", moji2);

	for (i = 0; moji1[i] != '\0'; i++) {
		work[i] = moji1[i];
	}
	work[i] = '\0';

	for (i = 0; moji2[i] != '\0'; i++) {
		moji1[i] = moji2[i];
	}
	moji1[i] = '\0';

	for (i = 0; work[i] != '\0'; i++) {
		moji2[i] = work[i];
	}
	moji2[i] = '\0';

	printf("moji1=%s", moji1);
	printf("\tmoji2=%s",moji2);
	
}