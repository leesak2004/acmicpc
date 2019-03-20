#include <stdio.h>

int main()
{
	int n;
	int a, b;
	int min;
	int flag;
	a = 0;
	b = 0;
	flag = 0;
	scanf("%d", &n);
	min = n / 3;
	while (a * 5 <= n)
	{
		while (b * 3 <= n - 5 * a)
		{
			if (a * 5 + b * 3 == n && min >= a + b)
			{
				min = a + b;
				flag = 1;
				break;
			}
			b++;
		}
		b = 0;
		a++;
	}
	if (flag == 1)
		printf("%d\n", min);
	else
		printf("-1\n");
	return 0;
}
