#include <iostream>
#include <string>
using namespace std;

int main()
{
	string week[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
	int mon, day;
	int i, j, cnt = 0;
	scanf("%d %d", &mon, &day);
	for (i = 1; i <= 12; i++)
	{
		for (j = 1; j <= 31; j++)
		{
			cnt++;
			if (cnt >= 7)
				cnt = 0;
			if (i == mon && j == day)
			{
				cout << week[cnt] << endl;
				return 0;
			}
			if (i == 2 && j == 28)
				break;
			if (i > 8 && i % 2 == 1)
				if (j == 30)
					break;
			if (i < 8 && i % 2 == 0)
				if (j == 30)
					break;
		
		}
	}
	return 0;
}