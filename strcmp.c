#include <stdio.h>
#include <string.h>

int main()
{
	char a[5], b[5];
	scanf("%[^\n]s", a);
	getchar();
	fgets(b, sizeof(b), stdin);
	printf("%d\n", strcmp(a, b));
	return 0;
}
