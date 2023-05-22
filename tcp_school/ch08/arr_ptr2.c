#include<stdio.h>

int main(void)
{
	int arr[3] = {10,20,30}; // 배열 선언
	printf("	 배열의 이름을 이용하여 배열 요소에 접근 : %d %d %d\n", arr[0], arr[1], arr[2]);
	printf("배열의 이름으로 포인터 연산 배열 요소에 접근 : %d %d %d\n", *(arr+0),*(arr+1),*(arr+2));
	return 0;
}
