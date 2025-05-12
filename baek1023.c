#include <stdio.h>

int main(void)
{
	int n, d, k;
	int maxstar = 0;
	int starcnt = 0;
	int cleancnt = 0;

	scanf("%d %d %d", &n, &d, &k);
	for (int i = 0; i < n; i++)
	{
		int star;
		scanf("%d", &star);
		if (star > maxstar)
			maxstar = star;
	}

	while (d--)
	{
		starcnt += maxstar;

		if (starcnt > k)
		{
			cleancnt++;
			starcnt = maxstar;
		}
	}
	printf("%d", cleancnt);
}
