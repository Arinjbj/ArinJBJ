#include <stdio.h>

int main ()
{
	int x, y, r;
	char s;

	printf("계산기 입니다. 정수 연산자 정수 순으로 입력하세요.\n(ex_ 54 * 36)\n");
	scanf("%d %c %d", &x, &s, &y);

	if(s == '+')
	{
		r = x + y;
	}

	else if(s == '-')
	{
		r = x - y;
	}

	else if(s == '*')
	{
		r = x * y;
	}

	else if(s == '/')
	{
		if(y == 0)
		{
			printf("\n0으로 나눌 수 없습니다.\n");
			return 0;
		}
		else
		{
			r = x / y;
		}
	}
	else
	{
		printf("\n잘못된 입력입니다.\n");
		return 0;
	}

	printf(" = %d\n", r);

	return 0;
}
