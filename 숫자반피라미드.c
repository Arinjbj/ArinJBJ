#include <stdio.h>

//숫자 피라미드의 반쪽을 출력합니다.
//반복함수같은 경우에는 오직 for문과 while문으로 구성이 됩니다.

int halfpyramid(int a)
{
	int i, j;
	for(i = 1; i <= a; i++)
	{
		for(j = 1; j <= i; j++)
		{
			printf("%d", j);
			printf(" ");
		}
		printf("\n");
	}
}

int main()
{
	int n;
	printf("n까지의 숫자로 반쪽짜리 피라미드를 만듭니다. 수를 입력하세요.\nn = ");
	scanf("%d", &n);
	halfpyramid(n);
	return 0;
}
