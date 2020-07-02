#include <stdio.h>

int main()
{
	char input[1001];
	fgets(input, sizeof(input - 1), stdin);
	int count = 0;
	while(input[count] != '\0')
	{
		count++;
	}
	printf("입력한 문자열의 글자 수는 %d입니다.\n", count - 1);
	return 0;
}
