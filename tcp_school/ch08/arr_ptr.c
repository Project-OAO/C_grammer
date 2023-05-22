#include<stdio.h>

int main(void)
{
	int arr[3] = {10,20,30}; // 배열 선언
	int* ptr_arr = arr;

	printf("배열의 이름을 이용하여 배열 요소에 접근 : %d %d %d\n", arr[0], arr[1], arr[2]);
	printf("	 포인터를 이용하여 배열 요소에 접근 : %d %d %d\n", ptr_arr[0], ptr_arr[1], ptr_arr[2]);
	printf("배열의 이름을 이용한 배열의 크기 계산 : %d\n", sizeof(arr));
	printf("	 포인터를 이용한 배열의 크기 계산 : %d\n", sizeof(ptr_arr));

	return 0;
}
