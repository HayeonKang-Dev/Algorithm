#include <stdio.h>

int main(void)
{
	int a, b, sum=0;
	scanf_s("%d %d", &a, &b);

	for (int i = a; i <= b; i++)
	{
		printf("%d", i);
		sum += i;
		if (i != b)
		{
			printf(" +");
		}
		else {
			printf(" = ");
		}
	}
	printf("%d", sum);
	return 0;
}
