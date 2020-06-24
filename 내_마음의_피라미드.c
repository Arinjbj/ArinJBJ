#include <stdio.h>

int main()
{
	int s1, s2;
	printf("사각형입니다.\n\n");
	
	for(s1 = 0;s1 < 5;s1++)
	{
		for(s2 = 0;s2 < 5;s2++)
		{
			printf("#");
			printf(" ");
		}
		printf("\n");
	}
	
	printf("\n\n피라미드입니다.\n");
	
	double p1, p2, bottom;
	printf("밑변의 길이를 입력하세요.\n");
	scanf("%le", &bottom);
	bottom += 1;
	
	for(p1 = 1;p1 <= bottom / 2;p1++)
	{
		for(p2 = 1;p2 <= bottom;p2++)
		{
			if((p2 < (bottom / 2) + p1) && (p2 > (bottom / 2) - p1))
			{
				printf("^");
			}
			else
			{
				printf(" ");
			}
		}

		printf("\n");
		
	}
	return 0;
}
