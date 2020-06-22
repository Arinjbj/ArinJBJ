#include <stdio.h>

int main(void)
{
	int score;
	char name[10];

	printf("학생의 이름을 입력하세요.\n");
	scanf("%s", name);
	printf("학점을 매깁니다. 점수를 입력하세요.(90이상 A, 80이상 B, 70이상 C, 60이상 D, 60미만 F)\n");
	scanf("%d", &score);

	printf("%s", name);

	if(score >= 90)
	{
		printf("학생의 학점은 A입니다.\n");
	}
	else if(score >= 80)
	{
		printf("학생의 학점은 B입니다.\n");
	}
	else if(score >= 70)
	{
		printf("학생의 학점은 C입니다.\n");
	}
	else if(score >= 60)
	{
		printf("학생의 학점은 D입니다.\n");
	}
	else
	{
		printf("학생의 학점은 F입니다.\n");
	}

	return 0;
}
