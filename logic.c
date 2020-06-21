#include <stdio.h>

int main()
{
	int x = 35, y;
	printf("x값은 35입니다. y값을 입력하세요. (ex:45)\n");
	scanf("%d", &y);
	printf("\nx가 y보다 크고 y는 45미만입니까? (참은1 거짓은0)\n%d\n", (x > y) && (y < 45));
	printf("x가 y보다 작거나 혹은 y가 30입니까? (참은1 거짓은0)\n%d\n", (x < y) || (y == 30));
	printf("y가 50이 아닙니까? (참은1 거짓은0)\n%d\n", y != 50);
	return 0;
}
