#include <stdio.h>

int main()
{
	char input;
	char a;
	while (1)
	{
		a = getchar();
		if (a == EOF)
			break;
		printf("%c", a);
	}
    return 0;
}
