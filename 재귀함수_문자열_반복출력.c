#include <stdio.h>


//n번만큼 문자열을 반복출력합니다.
void print(int count)
{
	if(count == 0)
	{
		return;
	}
	else
	{
		printf("문자열 (남은 횟수 : %d)\n", count - 1);
		print(count - 1);
	}
}


int main()
{
	int n;
	printf("문자열을 몇 줄 반복출력할까요? : ");
	scanf("%d", &n);
	print(n);
	return 0;
}
