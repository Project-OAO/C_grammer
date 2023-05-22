#include<stdio.h>

int main(void){
	int num = 10;
	int* ptr_num = &num;
	int** pptr_num = &ptr_num;

	printf("변수 num가 저장하고 있는 값은 %d입니다.\n", num);
	printf("포인터 ptr_num가 가리키는 주소에 저장된 값은 %d입니다.\n", *ptr_num);
	printf("포인터의 포인터 pptr_num가 가리키는 주소에 저장된 포인터가 가리키는 주소에 저장된 값은 %d입니다.\n", **pptr_num);
}
