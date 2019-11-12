#include <stdio.h>
int main()
{
	float a[3][4], t, max;
	int i, j;
	max = a[0][0];
	for (i = 0; i < 3; i++)
		for (j = 0; j < 4; j++)
			scanf_s("%f", &a[i][j]);
	for (i = 0; i < 3; i++)
	{
		for(j=0;j<4;j++)
			if (a[i][j]> max)
			{
				max = a[i][j];
			}
	}
	printf("%.2f", max);
	return 0;
}