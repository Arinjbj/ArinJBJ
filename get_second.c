#include <stdio.h>
#define SECOND_PER_MINUTE 60

int main()
{
	int input;
	printf("변환할 초(시간)을 입력하세요.\n");
	scanf("%d", &input);
	int minute = input / SECOND_PER_MINUTE;
	int second = input % SECOND_PER_MINUTE;
	printf("%d초는 %d분 %d초입니다.\n", input, minute, second);
	return 0;
}
