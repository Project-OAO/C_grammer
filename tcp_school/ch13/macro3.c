#include<stdio.h>
#define SQR(X) printf(""#X"의 제곱은 %d입니다.\n", ((X)*(X)))

int main(void)
{
	int x = 5;

	SQR(x);
	SQR(3+4);
	return 0;
}
