#include<stdio.h>

int main(void){
	int num = 10;
	void* ptr_num = &num;

	printf("변수 num가 저장하고 있는 값은 %d입니다\n", num);
	printf("void 포인터 prt_num가 가리키는 주소에 저장된 값은 %d입니다.\n", *(int*)ptr_num);

	*(int*)ptr_num = 20;
	printf("void 포인터 ptr_num가 가리키는 주소에 저장된 값은 %d입니다.\n", *(int*)ptr_num);
}
