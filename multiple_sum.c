#include <stdio.h>

int main(void)
{
	int n, m, sum = 0;

	scanf_s("%d %d", &n, &m);

	for (int i = 1; i <= n; i++)
	{
		if(i % m == 0)
		{
			sum += i;
		}

	}
	printf("%d\n", sum);
	return 0;
}
