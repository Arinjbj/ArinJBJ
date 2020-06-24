#include <stdio.h>
#include <limits.h>

int main()
{
	int imax = INT_MAX, x, y;
	printf("절대값을 구합니다. 정수를 입력하세요.(단, 수의 범위는 %d < x < %d)\n", imax + 1, imax);
	scanf("%d", &x);
	y = x;
	if(x < 0)
	{
		x = -x;
	}
	printf("%d의 절대값은 %d입니다.\n", y, x);
	return 0;
}
