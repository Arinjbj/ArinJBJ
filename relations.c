#include <stdio.h>

int main()
{
	int x, y;
	printf("x와 y를 입력하세요.(ex_56 24)\n");
	scanf("%d %d", &x, &y);
	//x == y -> true, x와 y가 같은 값을 가지고 있는 것입니다.
	printf("x가 y의 값과 같은가? (0은 아니다, 1은 맞다)\n%d\n", x == y);
	printf("x가 y의 값과 다른가? (0은 아니다, 1은 맞다)\n%d\n", x != y);
	printf("x가 y보다 큰가? (0은 아니다, 1은 맞다)\n%d\n", x > y);
	printf("x가 y보다 작은가? (0은 아니다, 1은 맞다)\n%d\n", x < y);
	printf("x에 y값을 넣으면?\n%d\n", x = y);
	return 0;
}
