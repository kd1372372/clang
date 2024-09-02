#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int num,answer,k=1;
	printf("1`1000‚Ì’†‚Å‚ ‚½‚è‚Ì”‚ğ—\‘z‚µ‚Ä‚­‚¾‚³‚¢\n");

	srand(time(0));
	rand();
	answer = rand() % 1000 + 1;

	while (1) {
		printf("‚ ‚½‚è‚Ì”‚ÍH");
		scanf("%d", &num);

		if (num < answer) {
			printf("‚ ‚½‚è‚Ì”‚æ‚è¬‚³‚¢‚Å‚·\n");
			k++;
		}
		else if (num > answer) {
			printf("‚ ‚½‚è‚Ì”‚æ‚è‘å‚«‚¢‚Å‚·\n");
			k++;
		}
		else {
			printf("³‰ğI%d‰ñ–Ú‚Å“–‚½‚è‚Ü‚µ‚½", k);
			break;
		}
	}

}