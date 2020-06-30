#include <stdio.h>
#include <limits.h>

int main()
{
	int i, max = 0, min = INT_MAX, maxindex, minindex;
	int array[5];
	//array[0] ~ array[4] : 총 5개가 들어갈 수 있는 크기의 배열 선언
	printf("5개의 정수 중 최대값과 최솟값, 그리고 그들의 위치를 인식합니다.\n5개의 정수를 스페이스바 혹은 엔터로 구분하여 입력해주세요.\n");
	for(i = 0; i < 5; i++)
	{
		scanf("%d", &array[i]);
		if(max < array[i])
		{
			max = array[i];
			maxindex = i;
		}
		if(min > array[i])
		{
			min = array[i];
			minindex = i;
		}
	}
	printf("가장 큰 값은 %d이며, %d번째에 있습니다.\n", max, maxindex + 1);
	printf("가장 작은 값은 %d이며, %d번째에 있습니다.\n", min, minindex + 1);
	return 0;
}
