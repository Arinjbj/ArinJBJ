#include <stdio.h>

int main()
{
	int x;
	printf("짝수, 홀수를 구별합니다. 숫자를 입력하세요.\n");
	scanf("%d", &x);
	printf("(0이면 짝수, 1이면 홀수입니다.)\n결과 : %d\n", (x % 2 ) != 0);
	return 0;
}
