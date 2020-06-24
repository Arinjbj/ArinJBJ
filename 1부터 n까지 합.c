#include <stdio.h>

int main()
{
	unsigned int x = 1, n, sum = 0;
	
	printf("1부터 n까지의 합을 구합니다. 92682미만의 자연수를 입력하세요.\n");
	scanf("%d", &n);
	printf("입력하신 값은 %d입니다.", n);
	
	if(n < 1 || n >= 92682)
	{
		printf("잘못된 입력입니다.");
	}
	else
	{
	while(x <= n)
	{
		sum += x;
		x++;
	}

	printf("1부터 %d까지의 합은 %u입니다.\n", n, sum);
	}
	return 0;
}
