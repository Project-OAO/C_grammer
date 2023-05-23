#include<stdio.h>
#define SQR(X) X*X
#define PRT(X) printf("계산 결과는 %d입니다.\n", X)

int main(void)
{
	int result;
	int x = 5;

	result = SQR(10);
	PRT(result);
	result = SQR(x);
	PRT(result);
	result = SQR(x+3);
	PRT(result);

	return 0;
}
