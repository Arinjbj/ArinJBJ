#include <stdio.h>

int main()
{
	/*
	 * 윤년은 4년마다 한 번. 하지만 100년 단위일 때는 윤년에 해당하지 않음
	 * 400년 단위일 따는 어떤 상황이어도 윤년으로 설정
	 */
	int year;
	printf("윤년인지 판독합니다. 연도를 입력하세요.\n");
	scanf("%d", &year);
	
	if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		printf("%d년은 윤년입니다.\n", year);
	}
	else
	{
		printf("%d년은 윤년이 아닙니다.\n", year);
	}

	return 0;
}
