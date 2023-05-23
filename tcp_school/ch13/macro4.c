#include<stdio.h>
#define XN(n) x##n

int main(void)
{
	int XN(1) = 10;
	int XN(2) = 20;

	printf("x1에 저장된 값은 %d입니다.", x1);
	printf("x2에 저장된 값은 %d입니다.", x2);
	return 0;
}
