#include<stdio.h>

main()
{
	int d[5] = { 30,7,25,16,10 };
	int i, j, w;

	for (i = 0; i < 4; i++)
	{
		for (j = i + 1; j < 5; j++)
		{
			if(d[i] > d[j])
			{
				w = d[i];
				d[i] = d[j];
				d[j] = w;
			}
		}
	}

	for (i = 0; i < 5; i++) {
		printf("%d", d[i]);
	}

	/*
	i = 0;
	while(i < 4){
		j=i+1;
		while(j<5){
			if(d[i] > d[j]){
				w = d[i];
				d[i] = d[j];
				d[j] = w;
			}
			j++;
		}
		i++;
	}
	*/
}