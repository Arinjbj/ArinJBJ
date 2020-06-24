#include <stdio.h>

int main()
{
	int s1, s2;
	printf("사각형입니다.\n\n");
	
	for(s1 = 0;s1 < 10;s1++)
	{
		for(s2 = 0;s2 < 10;s2++)
		{
			printf("# ");
		}
		printf("\n");
	}
	
	printf("\n\n피라미드입니다.\n");
	
	int p1, p2;
	
	for(p1 = 0;p1 < 10;p1++)
	{
		for(p2 = 10 - p1;p2 > 0;p2--)
		{
			printf("  ");
		}
		
		for(p2 = p1 - 1;p2 > 0;p2--)
		{
			printf("^ ");
		}
		
		for(p2 = p1 - 2;p2 > 0;p2--)
		{
			printf("^ ");
		}
		
		printf("\n");
	}
	
	return 0;
}
