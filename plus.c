#include <stdio.h>

int main()
{
	int x, y;
	printf("첫번째 숫자를 입력하시오.\n");
	scanf("%d", &x);
	printf("두번째 숫자를 입력하시오.\n");
	scanf("%d", &y);
	printf("%d + %d = %d 입니다.\n", x, y, x + y);
	return 0;
}
