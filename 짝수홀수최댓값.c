#include <stdio.h>

int main()
{
	int array[5];
	int i, oddmax = 0, evenmax = 0;
	printf("짝수인 최댓값과 홀수인 최댓값을 인식합니다.\n5개의 숫자를 공백 또는 엔터로 구분하여 입력해주세요.\n");
	for(i = 0; i < 5; i++)
	{
		scanf("%d", &array[i]);
		if(array[i] % 2 == 0 && array[i] > evenmax)
		{
			evenmax = array[i];
		}
		else if(array[i] % 2 == 1 && array[i] > oddmax)
		{
			oddmax = array[i];
		}
	}
	printf("입력받은 숫자중 짝수인 최대값은 %d, 홀수인 최대값은 %d입니다.\n", evenmax, oddmax);
	return 0;
}
