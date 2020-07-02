#include <stdio.h>
#include <string.h>

int main()
{
	char a[10],b[5];
	scanf("%[^\n]s", a);
	getchar();
	fgets(b, sizeof(b), stdin);
	printf("%s, %s\n", a, b);
	strcpy(a, b);
	printf("%s, %s\n", a, b);
	return 0;
}
