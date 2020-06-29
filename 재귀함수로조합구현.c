#include <stdio.h>

//n개중 순서 상관없이 r개를 뽑는 경우의 수를 구하는 함수입니다.
//공식 : nCr에서 r이 0또는 n일때에 값은 1이고 그렇지 않을 때에는 nCr = (n-1)C(r-1)+(n-1)C(r)이다.
int nCr(int n, int r)
{
	if(r == 0 || r == n)
	{
		return 1;
	}
	else
	{
		return nCr(n - 1, r - 1) + nCr(n - 1, r);
	}
}


int main()
{
	int n, r, result;
	printf("n개 중 r개를 뽑는 조합의 갯수를 구합니다. 수를 입력하세요.\nn = ");
	scanf("%d", &n);
	printf("r = ");
	scanf("%d", &r);
	printf("조합의 갯수는 %d개입니다.\n", nCr(n, r));
	return 0;
}
