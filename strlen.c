#include <stdio.h>
#include <string.h>

int main()
{
	char input[1001];
	fgets(input, sizeof(input), stdin);
	printf("문자열의 길이는 %ld입니다.\n", strlen(input) - 1);
	return 0;
}
