#include <stdio.h>

int main()
{
	unsigned int sum1 = 0, sum2 = 0;
	unsigned int n1 = 1, n2 = 0;
	
	while(n1 <= 10000)
	{
		sum1 += n1;
		n1++;
	}
	
	
	while(!((n2 > 10000) && (sum2 < sum1)))
	{
		n2++;
		sum2 += n2;
	}
	
	printf("1부터 n까지의 합을 구할때 uint의 오버플로우를 막기위해서 n은 %u 미만이어야 합니다.", n2);
	return 0;
}
