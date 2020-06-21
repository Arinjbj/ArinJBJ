#include <stdio.h>

int main()
{
	int x, y;
	char t[5] = "true", f[6] = "false";
	printf("x값과 y값을 입력하세요. (ex:54 -72)\n");
	scanf("%d %d", &x, &y);
	int max = (x > y) ? x : y;
	int min = (x < y) ? x : y;
	int plus = (x > 0) || (y > 0);

	printf("\nx 또는 y 가 양수인가요?\n%s\n", (plus == 1) ? t : f);
	printf("%d 와 %d 중 더 큰 값은 %d입니다.\n", x, y, max);
	printf("%d 와 %d 중 더 작은 값은 %d입니다.\n", x, y, min);
	return 0;
}
