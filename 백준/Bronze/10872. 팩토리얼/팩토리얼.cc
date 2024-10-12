#include <stdio.h>

int main() {

    int i, n;
	int result = 1;

    scanf("%d", &n);

	if (n > 0)
	{
		for ( i = 1; i <= n; i++)
		{
			result = result * i;
		}
		printf("%d", result);
	}
	else
	{
		printf("1");
	}
}